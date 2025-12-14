#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11224;
unsigned short var_1 = (unsigned short)37289;
signed char var_3 = (signed char)119;
unsigned int var_5 = 3452984252U;
unsigned short var_6 = (unsigned short)49537;
short var_8 = (short)-10890;
unsigned int var_10 = 2298085267U;
unsigned int var_11 = 370383748U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)17;
void init() {
}

void checksum() {
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
