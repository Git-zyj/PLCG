#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 575395942U;
unsigned short var_3 = (unsigned short)20811;
unsigned char var_4 = (unsigned char)171;
unsigned int var_5 = 2247471876U;
long long int var_7 = -8315608538094095821LL;
int zero = 0;
unsigned long long int var_10 = 7493960907592555963ULL;
int var_11 = -633577206;
unsigned short var_12 = (unsigned short)34512;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
