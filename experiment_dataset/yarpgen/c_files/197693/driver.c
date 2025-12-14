#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -343936842;
short var_2 = (short)18818;
unsigned char var_3 = (unsigned char)17;
short var_6 = (short)-30758;
unsigned int var_8 = 3099341476U;
int zero = 0;
unsigned short var_14 = (unsigned short)61060;
unsigned long long int var_15 = 13763060194158478505ULL;
unsigned long long int var_16 = 16271538308368311295ULL;
unsigned int var_17 = 2780988604U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
