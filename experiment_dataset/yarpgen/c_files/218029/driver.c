#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34335;
short var_9 = (short)-17608;
unsigned short var_10 = (unsigned short)2548;
unsigned short var_12 = (unsigned short)49925;
unsigned short var_13 = (unsigned short)54939;
int zero = 0;
unsigned short var_14 = (unsigned short)5710;
long long int var_15 = -2659619313982153245LL;
unsigned long long int var_16 = 8103939811682337592ULL;
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
