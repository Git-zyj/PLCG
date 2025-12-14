#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19336;
unsigned int var_2 = 2812538048U;
signed char var_3 = (signed char)120;
unsigned char var_5 = (unsigned char)201;
int zero = 0;
short var_11 = (short)1513;
signed char var_12 = (signed char)119;
unsigned int var_13 = 3558537242U;
signed char var_14 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
