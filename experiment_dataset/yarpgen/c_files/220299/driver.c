#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)78;
long long int var_5 = 7322219109943585878LL;
unsigned char var_6 = (unsigned char)197;
unsigned long long int var_10 = 7543126309596647300ULL;
unsigned short var_11 = (unsigned short)16970;
unsigned long long int var_13 = 6450629589028269896ULL;
unsigned short var_14 = (unsigned short)22702;
int zero = 0;
unsigned short var_16 = (unsigned short)65057;
int var_17 = 1146841504;
unsigned char var_18 = (unsigned char)240;
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
