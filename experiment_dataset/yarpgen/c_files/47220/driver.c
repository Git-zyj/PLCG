#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9211;
unsigned long long int var_2 = 5807709555032914725ULL;
unsigned int var_8 = 1675734104U;
int zero = 0;
unsigned char var_11 = (unsigned char)237;
unsigned int var_12 = 3770950702U;
unsigned short var_13 = (unsigned short)16905;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
