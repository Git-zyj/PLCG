#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13704;
unsigned char var_4 = (unsigned char)122;
int var_6 = 294001465;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 2284464572U;
int zero = 0;
unsigned int var_15 = 703649767U;
int var_16 = 2144451225;
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
