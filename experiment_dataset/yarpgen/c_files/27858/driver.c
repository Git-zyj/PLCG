#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2127064781;
unsigned int var_4 = 1683662617U;
unsigned int var_7 = 1127215615U;
int var_8 = 2058462181;
unsigned int var_17 = 1184312493U;
int zero = 0;
long long int var_18 = -57795194244302999LL;
long long int var_19 = -6294711744607413347LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
