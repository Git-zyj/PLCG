#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2492747325U;
unsigned int var_8 = 3483742315U;
short var_10 = (short)-16340;
int var_11 = 1345655013;
short var_12 = (short)6396;
int zero = 0;
unsigned char var_15 = (unsigned char)248;
_Bool var_16 = (_Bool)0;
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
