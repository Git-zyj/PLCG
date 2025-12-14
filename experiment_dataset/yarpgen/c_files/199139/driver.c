#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
unsigned long long int var_1 = 16288813576769845638ULL;
short var_3 = (short)15013;
unsigned char var_4 = (unsigned char)233;
short var_5 = (short)14202;
short var_6 = (short)474;
unsigned long long int var_7 = 17199991965943455486ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 3878568603U;
unsigned long long int var_13 = 2432709911588629906ULL;
unsigned int var_15 = 3830671720U;
unsigned short var_17 = (unsigned short)16897;
int zero = 0;
unsigned long long int var_18 = 11403399188929874489ULL;
unsigned long long int var_19 = 13532659769353051191ULL;
unsigned char var_20 = (unsigned char)99;
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
