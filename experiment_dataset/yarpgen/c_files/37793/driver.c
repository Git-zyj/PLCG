#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4077429375U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)1713;
int zero = 0;
long long int var_13 = 4784698723824830035LL;
short var_14 = (short)19965;
long long int var_15 = 3470151495718228519LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
