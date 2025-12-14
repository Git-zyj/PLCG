#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 187757092;
unsigned short var_1 = (unsigned short)13838;
int var_2 = -126243696;
int var_3 = -2118986605;
unsigned short var_4 = (unsigned short)53660;
unsigned short var_5 = (unsigned short)35127;
unsigned long long int var_8 = 17500186140624799657ULL;
unsigned short var_9 = (unsigned short)12910;
unsigned int var_12 = 1408052182U;
unsigned int var_13 = 1994774168U;
int zero = 0;
int var_18 = 1615310455;
unsigned int var_19 = 728106278U;
unsigned int var_20 = 2468076463U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
