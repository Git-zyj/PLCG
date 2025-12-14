#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -206098253;
_Bool var_4 = (_Bool)0;
int var_5 = 1273981251;
int var_6 = 1717068726;
short var_12 = (short)15272;
_Bool var_15 = (_Bool)0;
short var_19 = (short)-23746;
int zero = 0;
long long int var_20 = -6333955491640790453LL;
short var_21 = (short)31156;
int var_22 = -688636616;
int var_23 = -1674377023;
int var_24 = 1814201040;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
