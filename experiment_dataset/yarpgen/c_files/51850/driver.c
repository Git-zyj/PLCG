#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -173620273;
unsigned short var_5 = (unsigned short)38154;
int var_8 = 1221541574;
unsigned long long int var_10 = 12243567820328658398ULL;
short var_13 = (short)-23189;
signed char var_15 = (signed char)107;
int zero = 0;
unsigned char var_16 = (unsigned char)236;
unsigned int var_17 = 1036152335U;
unsigned short var_18 = (unsigned short)50497;
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
