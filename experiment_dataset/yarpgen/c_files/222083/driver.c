#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)214;
unsigned short var_12 = (unsigned short)62325;
unsigned long long int var_14 = 8052901202551115914ULL;
unsigned int var_15 = 387771308U;
unsigned int var_17 = 1130418330U;
int zero = 0;
signed char var_20 = (signed char)-72;
unsigned short var_21 = (unsigned short)156;
signed char var_22 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
