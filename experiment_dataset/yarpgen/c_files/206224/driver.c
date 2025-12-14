#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
unsigned int var_1 = 1102986455U;
unsigned long long int var_4 = 5379659186302810768ULL;
unsigned int var_5 = 1555186686U;
long long int var_14 = -3134881496424909328LL;
int var_17 = 1841875808;
int zero = 0;
signed char var_18 = (signed char)-101;
unsigned int var_19 = 2271506236U;
void init() {
}

void checksum() {
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
