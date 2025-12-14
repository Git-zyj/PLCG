#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 262650864U;
short var_2 = (short)-9396;
_Bool var_3 = (_Bool)0;
short var_4 = (short)12445;
unsigned int var_5 = 377300602U;
short var_10 = (short)-20205;
unsigned char var_11 = (unsigned char)127;
long long int var_13 = -5040296958966092749LL;
short var_14 = (short)-30488;
unsigned char var_15 = (unsigned char)87;
int zero = 0;
signed char var_16 = (signed char)2;
unsigned char var_17 = (unsigned char)181;
short var_18 = (short)-9677;
short var_19 = (short)4121;
void init() {
}

void checksum() {
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
