#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62218;
unsigned char var_3 = (unsigned char)76;
unsigned long long int var_6 = 16346581859061489262ULL;
signed char var_8 = (signed char)-9;
unsigned char var_11 = (unsigned char)63;
unsigned char var_14 = (unsigned char)59;
int zero = 0;
unsigned int var_15 = 185986592U;
short var_16 = (short)-17709;
unsigned long long int var_17 = 7546797597544852853ULL;
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
