#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 947995897366338120LL;
unsigned char var_9 = (unsigned char)157;
unsigned short var_12 = (unsigned short)8198;
int zero = 0;
unsigned short var_14 = (unsigned short)59092;
unsigned int var_15 = 48861148U;
unsigned char var_16 = (unsigned char)231;
unsigned int var_17 = 3773612322U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
