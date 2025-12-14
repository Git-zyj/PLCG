#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34003;
unsigned short var_4 = (unsigned short)59776;
long long int var_5 = 2078190697215073094LL;
unsigned long long int var_6 = 7517061020332394933ULL;
signed char var_7 = (signed char)-88;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)62;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)12721;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 18080213807739512039ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
