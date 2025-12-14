#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17384784443988010898ULL;
unsigned char var_7 = (unsigned char)210;
unsigned char var_8 = (unsigned char)199;
unsigned short var_9 = (unsigned short)39752;
unsigned short var_11 = (unsigned short)51030;
unsigned int var_13 = 3528498022U;
unsigned char var_14 = (unsigned char)20;
int zero = 0;
unsigned int var_15 = 4216061605U;
unsigned char var_16 = (unsigned char)58;
short var_17 = (short)-21056;
void init() {
}

void checksum() {
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
