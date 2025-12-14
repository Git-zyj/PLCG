#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22314;
short var_2 = (short)-22378;
short var_4 = (short)-28998;
int zero = 0;
signed char var_13 = (signed char)18;
_Bool var_14 = (_Bool)1;
short var_15 = (short)14621;
signed char var_16 = (signed char)-38;
unsigned short var_17 = (unsigned short)14431;
unsigned int var_18 = 1114290820U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
