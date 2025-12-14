#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2804783510625838045LL;
unsigned char var_6 = (unsigned char)184;
unsigned int var_7 = 586757425U;
int zero = 0;
int var_10 = 1230939291;
unsigned short var_11 = (unsigned short)42921;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
