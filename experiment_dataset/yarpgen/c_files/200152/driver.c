#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
int var_2 = -2094805118;
signed char var_4 = (signed char)-36;
short var_7 = (short)11712;
unsigned int var_8 = 75361354U;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_15 = 1661393140;
long long int var_16 = -5993463762257245449LL;
unsigned int var_17 = 3565804823U;
unsigned long long int var_18 = 4177003681005219430ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
