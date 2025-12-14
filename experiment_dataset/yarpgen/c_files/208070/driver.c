#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2521193102U;
int var_8 = 2106335741;
unsigned int var_11 = 4083638795U;
unsigned int var_12 = 115016262U;
int zero = 0;
unsigned long long int var_13 = 16524460229651170340ULL;
int var_14 = 867096431;
unsigned long long int var_15 = 10853187549890830855ULL;
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
