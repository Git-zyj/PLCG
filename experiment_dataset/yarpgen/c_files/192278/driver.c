#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)51498;
unsigned char var_10 = (unsigned char)91;
unsigned int var_12 = 2563608409U;
long long int var_16 = -3424867070526454675LL;
int zero = 0;
unsigned int var_19 = 2475574525U;
_Bool var_20 = (_Bool)0;
int var_21 = 195040344;
int var_22 = -730392814;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
