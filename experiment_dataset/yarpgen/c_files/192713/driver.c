#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
unsigned int var_5 = 3638318160U;
unsigned long long int var_6 = 2115314908820686833ULL;
short var_8 = (short)-7959;
unsigned long long int var_11 = 1676963147326785441ULL;
unsigned int var_13 = 2003290221U;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-32533;
long long int var_16 = 548483408959554767LL;
unsigned char var_17 = (unsigned char)184;
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
