#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_7 = 2951288547U;
unsigned short var_8 = (unsigned short)54304;
int var_15 = -137427202;
unsigned char var_16 = (unsigned char)204;
int zero = 0;
unsigned long long int var_19 = 7899349621236351873ULL;
unsigned int var_20 = 3955143892U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
