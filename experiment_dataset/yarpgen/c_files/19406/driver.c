#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
unsigned char var_2 = (unsigned char)75;
_Bool var_4 = (_Bool)1;
short var_6 = (short)637;
unsigned char var_7 = (unsigned char)16;
_Bool var_10 = (_Bool)0;
short var_11 = (short)17451;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 767281007U;
int var_14 = 828441922;
short var_15 = (short)-8910;
int zero = 0;
unsigned char var_16 = (unsigned char)27;
int var_17 = 1850616051;
unsigned char var_18 = (unsigned char)69;
int var_19 = 995469332;
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
