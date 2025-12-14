#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 938005320;
signed char var_3 = (signed char)77;
unsigned char var_4 = (unsigned char)69;
unsigned short var_8 = (unsigned short)48617;
unsigned long long int var_11 = 17461107682124761011ULL;
int var_12 = 1422353030;
unsigned char var_15 = (unsigned char)53;
int zero = 0;
long long int var_19 = 8453814824793746958LL;
long long int var_20 = -466336589770155537LL;
unsigned short var_21 = (unsigned short)23158;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
