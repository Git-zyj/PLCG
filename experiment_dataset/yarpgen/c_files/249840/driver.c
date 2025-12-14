#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_7 = 3743093340U;
unsigned long long int var_8 = 2605388150290252317ULL;
signed char var_9 = (signed char)-68;
unsigned long long int var_10 = 3165644861215725410ULL;
unsigned int var_12 = 3519928127U;
long long int var_15 = -2530954368614578616LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5757962799863700061ULL;
unsigned short var_18 = (unsigned short)15013;
unsigned int var_19 = 1525408451U;
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
