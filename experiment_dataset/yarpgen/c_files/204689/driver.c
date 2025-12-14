#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 385554942;
unsigned short var_5 = (unsigned short)57768;
unsigned short var_7 = (unsigned short)56254;
unsigned short var_9 = (unsigned short)31510;
unsigned long long int var_11 = 9823115781349862045ULL;
signed char var_12 = (signed char)23;
unsigned int var_13 = 292016924U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)1714;
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
