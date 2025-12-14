#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3821;
unsigned char var_2 = (unsigned char)211;
int var_3 = -852707893;
short var_14 = (short)16185;
int zero = 0;
unsigned int var_18 = 1168225796U;
unsigned int var_19 = 434859471U;
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
