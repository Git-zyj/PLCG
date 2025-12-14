#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 10769684204087698903ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 239919721U;
signed char var_14 = (signed char)31;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)31758;
signed char var_17 = (signed char)90;
int var_18 = -940869555;
unsigned int var_19 = 565960045U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
