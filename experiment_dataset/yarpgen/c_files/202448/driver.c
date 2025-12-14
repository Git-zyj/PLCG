#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -147165771;
int var_3 = 395267556;
int var_5 = 356902289;
int var_6 = -1952459182;
int var_7 = 741523116;
int var_8 = -961673582;
int zero = 0;
int var_11 = -147055122;
int var_12 = 1860632378;
int var_13 = 838042890;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
