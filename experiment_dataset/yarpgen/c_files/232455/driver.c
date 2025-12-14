#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)207;
int var_3 = 520729169;
int var_5 = -46496298;
unsigned long long int var_7 = 985043633068237994ULL;
signed char var_9 = (signed char)-31;
int zero = 0;
int var_16 = -172440892;
unsigned char var_17 = (unsigned char)52;
signed char var_18 = (signed char)-36;
unsigned char var_19 = (unsigned char)23;
void init() {
}

void checksum() {
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
