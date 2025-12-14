#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
unsigned char var_4 = (unsigned char)8;
long long int var_10 = 4092018448452337085LL;
unsigned int var_14 = 4119363040U;
int zero = 0;
long long int var_16 = -2554234769021031046LL;
unsigned long long int var_17 = 10078546998290591794ULL;
short var_18 = (short)-21641;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
