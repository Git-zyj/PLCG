#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 581759051U;
unsigned long long int var_7 = 12705492506353718139ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-115;
unsigned int var_14 = 3465726615U;
unsigned int var_15 = 2655030418U;
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
