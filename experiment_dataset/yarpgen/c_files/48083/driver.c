#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-63;
unsigned int var_4 = 2821064150U;
unsigned short var_8 = (unsigned short)35276;
unsigned int var_9 = 993908897U;
int zero = 0;
short var_10 = (short)2569;
unsigned short var_11 = (unsigned short)14722;
unsigned long long int var_12 = 14876591201473925023ULL;
int var_13 = 2122094852;
unsigned int var_14 = 2152328376U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
