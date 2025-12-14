#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14329887286854940201ULL;
unsigned short var_6 = (unsigned short)54541;
signed char var_10 = (signed char)2;
unsigned long long int var_11 = 12938857715847019468ULL;
int zero = 0;
short var_12 = (short)-5129;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2263678693348556249LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
