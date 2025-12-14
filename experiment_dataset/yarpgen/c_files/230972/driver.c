#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)17487;
unsigned long long int var_4 = 4944939860832482930ULL;
signed char var_6 = (signed char)108;
int zero = 0;
unsigned char var_15 = (unsigned char)92;
signed char var_16 = (signed char)50;
unsigned int var_17 = 686928543U;
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
