#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 479379039;
signed char var_16 = (signed char)-88;
int var_17 = -1852490883;
int zero = 0;
int var_20 = 1095636896;
signed char var_21 = (signed char)56;
unsigned int var_22 = 4057910171U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
