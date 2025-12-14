#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8311;
unsigned char var_6 = (unsigned char)152;
unsigned long long int var_8 = 14044265222641675317ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)26101;
unsigned int var_11 = 4113353981U;
unsigned char var_12 = (unsigned char)157;
signed char var_13 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
