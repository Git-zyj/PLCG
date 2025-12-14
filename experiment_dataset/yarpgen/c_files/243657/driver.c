#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6086;
short var_5 = (short)-22413;
unsigned char var_6 = (unsigned char)86;
signed char var_8 = (signed char)-13;
unsigned short var_9 = (unsigned short)21173;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3658575521U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 1195631717U;
int var_15 = 1194950579;
signed char var_16 = (signed char)23;
signed char var_17 = (signed char)2;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
