#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)252;
int var_9 = 1267726490;
unsigned long long int var_11 = 12417303575752057958ULL;
short var_13 = (short)1313;
int zero = 0;
short var_14 = (short)-19012;
unsigned char var_15 = (unsigned char)182;
unsigned char var_16 = (unsigned char)158;
void init() {
}

void checksum() {
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
