#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
long long int var_4 = -8402855135698953104LL;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)31944;
unsigned short var_12 = (unsigned short)18539;
long long int var_15 = 8134413513922303923LL;
int zero = 0;
long long int var_18 = 2139903079631572221LL;
unsigned int var_19 = 3342183726U;
short var_20 = (short)-9416;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
