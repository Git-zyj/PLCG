#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 434852384;
unsigned int var_4 = 1182832444U;
unsigned short var_10 = (unsigned short)64538;
signed char var_12 = (signed char)110;
unsigned short var_13 = (unsigned short)35697;
unsigned int var_14 = 1338660930U;
int zero = 0;
short var_15 = (short)3166;
unsigned int var_16 = 4261916565U;
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
