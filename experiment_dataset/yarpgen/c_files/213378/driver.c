#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10437670951419001756ULL;
unsigned short var_2 = (unsigned short)48149;
unsigned short var_4 = (unsigned short)14396;
unsigned short var_11 = (unsigned short)15924;
unsigned int var_12 = 971350030U;
short var_13 = (short)-21917;
int zero = 0;
unsigned short var_18 = (unsigned short)16420;
short var_19 = (short)808;
unsigned char var_20 = (unsigned char)252;
unsigned int var_21 = 3538279295U;
short var_22 = (short)-16013;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
