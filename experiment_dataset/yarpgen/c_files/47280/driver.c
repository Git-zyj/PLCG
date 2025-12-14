#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65382;
unsigned short var_3 = (unsigned short)20428;
short var_4 = (short)4216;
unsigned short var_6 = (unsigned short)65351;
unsigned short var_7 = (unsigned short)7456;
int var_8 = -518024596;
unsigned int var_9 = 3152261712U;
int zero = 0;
unsigned short var_10 = (unsigned short)6316;
unsigned int var_11 = 757068438U;
unsigned short var_12 = (unsigned short)38488;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
