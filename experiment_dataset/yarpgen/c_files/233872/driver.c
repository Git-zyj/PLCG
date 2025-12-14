#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
int var_7 = 744095480;
signed char var_11 = (signed char)-118;
int var_14 = 1972802776;
int zero = 0;
unsigned short var_15 = (unsigned short)19851;
unsigned short var_16 = (unsigned short)51384;
int var_17 = -578204185;
void init() {
}

void checksum() {
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
