#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2526302497U;
_Bool var_1 = (_Bool)0;
long long int var_2 = -6372396318231734587LL;
signed char var_3 = (signed char)-22;
signed char var_4 = (signed char)85;
long long int var_6 = -241822615034544924LL;
short var_8 = (short)19554;
int var_10 = -2017923245;
short var_12 = (short)-6544;
int zero = 0;
signed char var_15 = (signed char)89;
short var_16 = (short)-22419;
unsigned char var_17 = (unsigned char)198;
void init() {
}

void checksum() {
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
