#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2491396552315645237LL;
unsigned short var_3 = (unsigned short)12291;
unsigned short var_6 = (unsigned short)52104;
int var_8 = 1577997378;
long long int var_10 = -6528666065065498065LL;
unsigned int var_11 = 3641956256U;
unsigned char var_13 = (unsigned char)240;
long long int var_14 = 8424172064133871478LL;
unsigned short var_15 = (unsigned short)37574;
short var_16 = (short)-21383;
int zero = 0;
unsigned int var_19 = 3738032623U;
unsigned short var_20 = (unsigned short)54114;
signed char var_21 = (signed char)114;
long long int var_22 = 6202108235992608452LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
