#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)30681;
unsigned int var_10 = 3099225657U;
unsigned int var_12 = 1667488715U;
unsigned short var_15 = (unsigned short)10660;
unsigned int var_16 = 2101984424U;
unsigned int var_17 = 1996518187U;
signed char var_18 = (signed char)75;
int zero = 0;
unsigned short var_20 = (unsigned short)34436;
short var_21 = (short)13812;
unsigned short var_22 = (unsigned short)64082;
unsigned char var_23 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
