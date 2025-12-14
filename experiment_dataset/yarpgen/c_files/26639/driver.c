#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1020180630U;
unsigned char var_2 = (unsigned char)173;
unsigned short var_10 = (unsigned short)52696;
short var_12 = (short)9147;
signed char var_14 = (signed char)5;
unsigned short var_15 = (unsigned short)63144;
int zero = 0;
unsigned short var_16 = (unsigned short)12398;
long long int var_17 = -6899841865505155380LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
