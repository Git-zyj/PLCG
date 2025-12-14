#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 335371023;
signed char var_4 = (signed char)100;
unsigned char var_5 = (unsigned char)223;
unsigned long long int var_6 = 7984349905746864128ULL;
unsigned char var_9 = (unsigned char)84;
_Bool var_10 = (_Bool)1;
int var_11 = -130714842;
signed char var_12 = (signed char)37;
unsigned int var_13 = 1532964333U;
int zero = 0;
unsigned int var_14 = 3672214349U;
unsigned char var_15 = (unsigned char)56;
int var_16 = 107322642;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
