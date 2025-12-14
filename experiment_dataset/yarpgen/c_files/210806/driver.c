#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 345345051U;
long long int var_5 = 742524164284309453LL;
signed char var_7 = (signed char)28;
unsigned char var_8 = (unsigned char)11;
long long int var_11 = -4571546602798524244LL;
int var_12 = 1680320965;
int zero = 0;
unsigned char var_14 = (unsigned char)117;
int var_15 = -1465471274;
unsigned short var_16 = (unsigned short)45648;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
