#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4927757877565939796LL;
long long int var_2 = -1016405992279076386LL;
int var_3 = 867433960;
signed char var_5 = (signed char)-40;
int zero = 0;
int var_13 = -810672098;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1756301297U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
