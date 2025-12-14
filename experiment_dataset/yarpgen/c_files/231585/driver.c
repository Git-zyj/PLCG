#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16465659498117880300ULL;
unsigned int var_5 = 3841086634U;
unsigned int var_10 = 4209757128U;
signed char var_11 = (signed char)105;
int zero = 0;
unsigned char var_12 = (unsigned char)99;
unsigned int var_13 = 1317224206U;
unsigned int var_14 = 1793718826U;
unsigned long long int var_15 = 6317194461885612068ULL;
unsigned short var_16 = (unsigned short)51350;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
