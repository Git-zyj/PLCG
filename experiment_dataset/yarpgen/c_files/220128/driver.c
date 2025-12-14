#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 5132286715913982626LL;
unsigned long long int var_4 = 17002708316381307489ULL;
short var_5 = (short)14886;
int var_7 = 540857523;
signed char var_10 = (signed char)-91;
unsigned long long int var_12 = 13486105622400504645ULL;
int zero = 0;
int var_15 = 1161910942;
unsigned int var_16 = 2105333496U;
int var_17 = 1299516541;
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
