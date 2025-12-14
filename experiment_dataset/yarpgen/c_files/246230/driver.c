#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2977350678U;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-28852;
unsigned long long int var_13 = 10102497974112618915ULL;
short var_14 = (short)3820;
int zero = 0;
unsigned int var_15 = 144462343U;
long long int var_16 = 8073204827035722303LL;
short var_17 = (short)-6707;
signed char var_18 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
