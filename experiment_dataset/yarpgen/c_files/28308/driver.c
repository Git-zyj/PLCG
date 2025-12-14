#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)127;
unsigned char var_3 = (unsigned char)131;
unsigned int var_4 = 294957268U;
unsigned long long int var_5 = 2627975486002112809ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)10515;
unsigned long long int var_16 = 11026268491754962710ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
