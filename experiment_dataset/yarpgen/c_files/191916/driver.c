#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
unsigned int var_1 = 3742973773U;
int var_4 = -47935317;
unsigned int var_5 = 3552601851U;
int var_6 = -1516007280;
unsigned short var_7 = (unsigned short)25135;
long long int var_9 = -5395294292353607264LL;
unsigned char var_11 = (unsigned char)8;
long long int var_13 = -452993440827697832LL;
short var_14 = (short)-7656;
int zero = 0;
unsigned long long int var_15 = 12682072227686901665ULL;
unsigned long long int var_16 = 3647664861445507541ULL;
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
