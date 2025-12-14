#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
unsigned char var_1 = (unsigned char)92;
unsigned int var_3 = 3289322546U;
unsigned int var_7 = 1559968661U;
unsigned char var_11 = (unsigned char)71;
unsigned char var_13 = (unsigned char)28;
unsigned int var_14 = 1558977989U;
int zero = 0;
unsigned int var_16 = 2979603637U;
unsigned int var_17 = 184742275U;
void init() {
}

void checksum() {
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
