#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 513073644U;
unsigned char var_12 = (unsigned char)110;
int var_13 = -1250648596;
int zero = 0;
int var_16 = -1039954179;
unsigned int var_17 = 2660295208U;
unsigned short var_18 = (unsigned short)56407;
int var_19 = -628111114;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
