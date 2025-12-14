#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16271;
unsigned short var_2 = (unsigned short)34070;
unsigned long long int var_7 = 7285532796574359298ULL;
unsigned char var_10 = (unsigned char)99;
short var_11 = (short)-9357;
long long int var_13 = 6686567192504482186LL;
unsigned char var_15 = (unsigned char)77;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = 145916747603330432LL;
short var_19 = (short)8249;
void init() {
}

void checksum() {
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
