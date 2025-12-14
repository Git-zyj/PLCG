#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22234;
int var_2 = 2021495969;
long long int var_3 = 5688639728116311582LL;
signed char var_4 = (signed char)45;
unsigned long long int var_5 = 3652545733345234625ULL;
unsigned int var_7 = 4132179533U;
unsigned char var_8 = (unsigned char)235;
short var_10 = (short)-28557;
unsigned short var_11 = (unsigned short)777;
short var_13 = (short)9298;
int zero = 0;
unsigned int var_15 = 1828421584U;
unsigned short var_16 = (unsigned short)5948;
int var_17 = -1735611825;
unsigned int var_18 = 3099096468U;
long long int var_19 = 988107050190384211LL;
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
