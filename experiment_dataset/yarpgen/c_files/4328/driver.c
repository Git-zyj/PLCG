#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26874;
unsigned int var_4 = 1210055684U;
unsigned long long int var_6 = 13468906379594789404ULL;
short var_8 = (short)26951;
unsigned int var_10 = 3838125167U;
unsigned char var_11 = (unsigned char)38;
int zero = 0;
unsigned short var_14 = (unsigned short)6135;
int var_15 = 813786744;
unsigned long long int var_16 = 10498855493025833163ULL;
int var_17 = 616189520;
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
