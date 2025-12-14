#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3435867700U;
unsigned long long int var_10 = 9887949794870503022ULL;
unsigned long long int var_11 = 15058292866095212532ULL;
int zero = 0;
unsigned int var_14 = 2478632527U;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)97;
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
