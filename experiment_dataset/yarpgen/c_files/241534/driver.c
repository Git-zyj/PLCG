#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 6856568946056927674ULL;
unsigned long long int var_15 = 11051442300238365881ULL;
int zero = 0;
int var_18 = 182384369;
int var_19 = -2116715054;
unsigned int var_20 = 345592409U;
signed char var_21 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
