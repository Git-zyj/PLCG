#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1181155546609965278LL;
short var_1 = (short)21904;
unsigned int var_2 = 4097243159U;
unsigned short var_7 = (unsigned short)48453;
unsigned int var_9 = 966010339U;
int var_10 = -607826625;
unsigned char var_11 = (unsigned char)133;
unsigned int var_12 = 3800801009U;
int zero = 0;
unsigned long long int var_14 = 1368046203811775030ULL;
unsigned long long int var_15 = 13098149818775258937ULL;
signed char var_16 = (signed char)75;
unsigned short var_17 = (unsigned short)575;
int var_18 = 528194739;
unsigned char var_19 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
