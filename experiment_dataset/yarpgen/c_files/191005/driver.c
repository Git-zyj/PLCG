#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2741791568U;
unsigned int var_1 = 2921253184U;
_Bool var_5 = (_Bool)1;
short var_11 = (short)11975;
unsigned int var_12 = 3163412444U;
unsigned long long int var_16 = 2563956539024572883ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)49;
unsigned char var_19 = (unsigned char)33;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3229776395U;
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
