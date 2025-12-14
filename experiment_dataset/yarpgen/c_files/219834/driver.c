#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57459;
unsigned short var_3 = (unsigned short)21184;
unsigned short var_8 = (unsigned short)6360;
unsigned short var_11 = (unsigned short)56280;
unsigned short var_14 = (unsigned short)29797;
int zero = 0;
unsigned short var_18 = (unsigned short)29836;
unsigned short var_19 = (unsigned short)65150;
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
