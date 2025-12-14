#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2781743236U;
unsigned int var_4 = 18560120U;
unsigned int var_10 = 1323698632U;
unsigned short var_14 = (unsigned short)47621;
int zero = 0;
short var_16 = (short)11256;
unsigned long long int var_17 = 628880164768856375ULL;
unsigned long long int var_18 = 18295035468220927642ULL;
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
