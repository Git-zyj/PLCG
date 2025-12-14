#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4361151546239986045ULL;
int var_5 = 1028857354;
_Bool var_8 = (_Bool)1;
unsigned char var_13 = (unsigned char)147;
unsigned int var_14 = 1904643404U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2110281010U;
int var_20 = -1848037873;
unsigned int var_21 = 896392001U;
void init() {
}

void checksum() {
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
