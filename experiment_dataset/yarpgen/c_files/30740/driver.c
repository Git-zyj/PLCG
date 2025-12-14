#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 3185957182340883859ULL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 6196095175831412740ULL;
unsigned int var_6 = 2955057486U;
int zero = 0;
unsigned int var_10 = 984002680U;
unsigned int var_11 = 1109643150U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
