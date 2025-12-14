#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)211;
unsigned int var_14 = 166842801U;
unsigned int var_16 = 3260761400U;
unsigned long long int var_17 = 2429377231306722808ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)215;
unsigned short var_20 = (unsigned short)51815;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
