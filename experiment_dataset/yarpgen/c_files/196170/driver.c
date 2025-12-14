#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1794469156U;
signed char var_8 = (signed char)12;
unsigned int var_10 = 3414895315U;
unsigned int var_13 = 3049779083U;
unsigned char var_15 = (unsigned char)178;
signed char var_16 = (signed char)76;
int zero = 0;
unsigned char var_20 = (unsigned char)144;
unsigned int var_21 = 2275584822U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
