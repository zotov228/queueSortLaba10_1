// queueSort.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <queue>
using namespace std;


int main()
{
	queue<int> one_queue;
	queue<int> side_queue;
	queue<int> res_queue;
	int k = 0;

	// One queue. Cout
	cout << "One queue" << '\n';
	for (int i = 0; i <= 10; i++) {
		one_queue.push(k = rand() % 10 + 1);
		cout << k << ' ';
	}
	cout << '\n';

	//process sort
	int min, tek;
	while (!one_queue.empty()) {
		min = one_queue.front();
		one_queue.pop();
		side_queue.push(min);
		while (!one_queue.empty())
		{
			tek = one_queue.front();
			one_queue.pop();
			if (tek < min)min = tek;
			side_queue.push(tek);
		}
	}

	cout << "Result process:" << '\n';
	for (int i = 0; i <= 10; i++) {
		res_queue.push(k = rand() % tek);
		cout << k << ' ';
	}
	system("pause");
	return 0;
}

