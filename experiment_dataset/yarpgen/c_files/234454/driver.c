#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1606917127;
unsigned char var_1 = (unsigned char)24;
int var_2 = -1442261112;
unsigned char var_4 = (unsigned char)187;
unsigned int var_7 = 3452597405U;
int zero = 0;
unsigned long long int var_12 = 12136878536602539975ULL;
int var_13 = 147111466;
unsigned char var_14 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
