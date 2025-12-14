#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned int var_8 = 1446760679U;
unsigned int var_10 = 2134990577U;
long long int var_11 = -3275122867486326100LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 349787616;
unsigned long long int var_16 = 10805070994037125702ULL;
void init() {
}

void checksum() {
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
