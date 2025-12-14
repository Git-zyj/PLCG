#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13955268459371229980ULL;
unsigned char var_5 = (unsigned char)177;
int var_7 = 1771139236;
unsigned short var_11 = (unsigned short)1427;
int zero = 0;
unsigned long long int var_15 = 14025969034444389552ULL;
signed char var_16 = (signed char)-87;
unsigned long long int var_17 = 15648296950835048647ULL;
unsigned char var_18 = (unsigned char)116;
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
