#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2412453386U;
unsigned int var_3 = 3989832883U;
unsigned char var_4 = (unsigned char)235;
unsigned long long int var_10 = 15364850877622327217ULL;
unsigned char var_16 = (unsigned char)5;
int var_17 = -868058758;
int zero = 0;
unsigned int var_18 = 875543467U;
int var_19 = 106641305;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
