#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7979627936239478652LL;
int var_7 = -699244802;
unsigned short var_10 = (unsigned short)28054;
unsigned char var_13 = (unsigned char)48;
int var_16 = -995667324;
_Bool var_17 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)89;
short var_21 = (short)27828;
unsigned char var_22 = (unsigned char)43;
unsigned int var_23 = 1472163321U;
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
