#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1383884047U;
unsigned long long int var_4 = 2244819404201167915ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)65041;
int zero = 0;
unsigned short var_14 = (unsigned short)36582;
unsigned int var_15 = 4087923633U;
int var_16 = 960734876;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
