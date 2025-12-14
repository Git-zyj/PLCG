#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)55559;
long long int var_2 = 4342536505098758887LL;
unsigned int var_3 = 3709719274U;
unsigned short var_5 = (unsigned short)962;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 3402341667U;
unsigned int var_12 = 3793324522U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
