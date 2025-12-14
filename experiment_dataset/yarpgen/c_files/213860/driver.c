#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)51089;
unsigned short var_7 = (unsigned short)982;
unsigned short var_10 = (unsigned short)54396;
unsigned int var_13 = 1529316479U;
int zero = 0;
unsigned long long int var_15 = 17697211829364257954ULL;
unsigned long long int var_16 = 4564700782203832433ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
