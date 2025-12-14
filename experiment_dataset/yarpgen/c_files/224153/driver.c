#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 466142301U;
short var_11 = (short)22124;
unsigned int var_13 = 4033523502U;
short var_14 = (short)19899;
unsigned char var_15 = (unsigned char)83;
int zero = 0;
long long int var_17 = -560458230412564498LL;
unsigned char var_18 = (unsigned char)63;
long long int var_19 = 3712132148603275540LL;
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
