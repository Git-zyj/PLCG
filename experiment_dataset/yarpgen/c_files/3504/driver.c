#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15241;
unsigned long long int var_2 = 13856162736748501843ULL;
unsigned char var_4 = (unsigned char)190;
short var_6 = (short)-32117;
int var_8 = 992251464;
unsigned int var_10 = 64867075U;
unsigned long long int var_11 = 16765361873388010995ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)6;
short var_13 = (short)1862;
void init() {
}

void checksum() {
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
