#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1967757710;
short var_11 = (short)23736;
unsigned long long int var_12 = 12806594592331402763ULL;
unsigned int var_15 = 4217480560U;
int zero = 0;
unsigned short var_17 = (unsigned short)44753;
long long int var_18 = 1319104729571536839LL;
void init() {
}

void checksum() {
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
