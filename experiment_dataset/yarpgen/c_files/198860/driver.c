#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17024606914348599671ULL;
unsigned int var_1 = 2178537430U;
short var_2 = (short)-2312;
unsigned short var_8 = (unsigned short)60891;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)33;
signed char var_15 = (signed char)87;
unsigned int var_16 = 1865923366U;
short var_17 = (short)-17958;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
