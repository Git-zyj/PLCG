#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1128436083U;
unsigned short var_3 = (unsigned short)16041;
unsigned char var_8 = (unsigned char)249;
signed char var_9 = (signed char)103;
signed char var_11 = (signed char)14;
unsigned int var_12 = 3690125748U;
int var_14 = 1000281506;
int zero = 0;
unsigned char var_16 = (unsigned char)92;
unsigned short var_17 = (unsigned short)56785;
unsigned char var_18 = (unsigned char)73;
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
