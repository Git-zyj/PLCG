#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)33864;
_Bool var_6 = (_Bool)0;
long long int var_8 = 8175657118406116324LL;
unsigned int var_9 = 2928427250U;
unsigned long long int var_15 = 7128675521835891974ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)1898;
int var_18 = -662896023;
void init() {
}

void checksum() {
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
