#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7022629990763919009LL;
int var_14 = -1524620182;
signed char var_15 = (signed char)109;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -5054109627293444817LL;
int var_18 = -1806683075;
short var_19 = (short)13088;
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
