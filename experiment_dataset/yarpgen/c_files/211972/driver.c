#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23891;
int var_3 = 1990455320;
unsigned int var_5 = 4051854105U;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_16 = -1194989112;
int var_17 = -1679843590;
void init() {
}

void checksum() {
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
