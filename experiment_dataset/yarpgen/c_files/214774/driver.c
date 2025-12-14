#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5935034590651620769LL;
unsigned int var_3 = 508505733U;
unsigned long long int var_7 = 7242746521171309745ULL;
unsigned long long int var_8 = 17589544801230043888ULL;
unsigned long long int var_11 = 3462379272373591585ULL;
unsigned int var_12 = 3189856712U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6421247208700674244ULL;
unsigned long long int var_16 = 11198624580266732245ULL;
unsigned long long int var_17 = 1848294872124198438ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
