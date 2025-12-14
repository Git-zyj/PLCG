#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
long long int var_10 = 2561756740708048887LL;
_Bool var_16 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)-28274;
long long int var_20 = 2741473777356871981LL;
long long int var_21 = 742875476182250874LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)30015;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
