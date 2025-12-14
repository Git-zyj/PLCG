#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34599;
unsigned short var_5 = (unsigned short)58110;
unsigned short var_6 = (unsigned short)38026;
unsigned short var_7 = (unsigned short)20772;
unsigned short var_8 = (unsigned short)41896;
unsigned short var_10 = (unsigned short)3151;
unsigned short var_11 = (unsigned short)38944;
unsigned short var_14 = (unsigned short)6724;
int zero = 0;
unsigned short var_15 = (unsigned short)30041;
unsigned short var_16 = (unsigned short)33395;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
