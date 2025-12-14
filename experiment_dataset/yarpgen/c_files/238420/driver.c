#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3083;
unsigned long long int var_1 = 11605486237263748982ULL;
unsigned int var_4 = 990370442U;
unsigned long long int var_6 = 9505749494736098935ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)27602;
int var_11 = 1157285473;
unsigned int var_12 = 3476084400U;
unsigned short var_13 = (unsigned short)63346;
int zero = 0;
unsigned short var_15 = (unsigned short)36573;
unsigned int var_16 = 951821589U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
