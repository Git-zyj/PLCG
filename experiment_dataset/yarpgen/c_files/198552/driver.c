#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1015145436877339608ULL;
long long int var_8 = 8634424538214788239LL;
short var_11 = (short)-9107;
unsigned short var_12 = (unsigned short)12988;
int var_16 = -207684108;
unsigned char var_17 = (unsigned char)197;
int zero = 0;
long long int var_20 = -1076429263622829045LL;
int var_21 = -749024176;
short var_22 = (short)-5406;
unsigned long long int var_23 = 484624542980240503ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
