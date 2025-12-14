#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 1711577123;
unsigned short var_7 = (unsigned short)65362;
signed char var_12 = (signed char)5;
int zero = 0;
long long int var_17 = -895987045830382450LL;
short var_18 = (short)-15796;
unsigned int var_19 = 447774567U;
void init() {
}

void checksum() {
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
