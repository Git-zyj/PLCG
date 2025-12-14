#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24723;
short var_4 = (short)32596;
unsigned long long int var_7 = 12823252486560291350ULL;
short var_10 = (short)-2687;
long long int var_12 = 7855765953781722500LL;
int var_13 = 1977725950;
int zero = 0;
long long int var_15 = -5750903245608311257LL;
unsigned short var_16 = (unsigned short)28790;
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
