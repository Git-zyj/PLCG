#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-16838;
unsigned long long int var_8 = 11480657147255475744ULL;
int var_12 = 2131350482;
short var_13 = (short)-30866;
unsigned int var_14 = 3118380688U;
int zero = 0;
unsigned int var_15 = 2998494900U;
int var_16 = -1303907049;
unsigned int var_17 = 915088530U;
unsigned short var_18 = (unsigned short)53234;
int var_19 = -1164445771;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
