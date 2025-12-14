#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12774807178810243497ULL;
signed char var_4 = (signed char)-25;
short var_7 = (short)12563;
unsigned int var_13 = 646204498U;
int zero = 0;
short var_16 = (short)5651;
unsigned int var_17 = 1201951861U;
unsigned int var_18 = 3280709765U;
unsigned int var_19 = 792272948U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
