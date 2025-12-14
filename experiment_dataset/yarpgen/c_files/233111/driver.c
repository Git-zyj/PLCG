#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)62519;
unsigned short var_11 = (unsigned short)2229;
short var_13 = (short)7563;
unsigned long long int var_14 = 2362843771351159200ULL;
int zero = 0;
unsigned int var_17 = 1742334771U;
int var_18 = -258615133;
unsigned int var_19 = 2487686136U;
void init() {
}

void checksum() {
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
