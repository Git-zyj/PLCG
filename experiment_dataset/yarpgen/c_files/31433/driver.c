#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 198198999U;
int var_4 = -2042093900;
short var_5 = (short)-1484;
_Bool var_6 = (_Bool)0;
long long int var_9 = 3802667136005796099LL;
unsigned char var_12 = (unsigned char)33;
long long int var_13 = -5869415112835036992LL;
signed char var_15 = (signed char)30;
int var_16 = 1609096851;
short var_17 = (short)21652;
int zero = 0;
unsigned short var_18 = (unsigned short)38935;
short var_19 = (short)-18135;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
