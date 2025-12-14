#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5956068452520617058LL;
_Bool var_11 = (_Bool)1;
unsigned int var_17 = 3532727122U;
unsigned int var_18 = 2353070757U;
int zero = 0;
unsigned int var_20 = 2233078525U;
unsigned long long int var_21 = 3565192303230673326ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
