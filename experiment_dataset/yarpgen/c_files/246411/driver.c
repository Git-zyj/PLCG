#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1059565728;
unsigned char var_6 = (unsigned char)142;
unsigned int var_10 = 3999909210U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)205;
unsigned int var_16 = 1131324894U;
unsigned long long int var_17 = 12149187763215839171ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
