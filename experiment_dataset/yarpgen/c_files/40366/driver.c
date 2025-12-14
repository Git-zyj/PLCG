#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11667;
long long int var_4 = 469136770623747594LL;
short var_7 = (short)15825;
short var_8 = (short)-29030;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)5983;
int zero = 0;
unsigned char var_13 = (unsigned char)192;
short var_14 = (short)13586;
unsigned short var_15 = (unsigned short)42060;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
