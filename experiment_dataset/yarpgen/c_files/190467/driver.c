#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1372663803U;
unsigned long long int var_3 = 13800474541923400758ULL;
short var_6 = (short)-14686;
long long int var_7 = 3054960297900069474LL;
short var_8 = (short)-10330;
int zero = 0;
unsigned int var_10 = 374387994U;
unsigned long long int var_11 = 14567945774752526482ULL;
unsigned char var_12 = (unsigned char)37;
signed char var_13 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
