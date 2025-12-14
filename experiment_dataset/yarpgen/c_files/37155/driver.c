#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11236102982498945438ULL;
unsigned short var_3 = (unsigned short)18460;
long long int var_5 = -5120403208149914535LL;
unsigned char var_8 = (unsigned char)45;
unsigned char var_9 = (unsigned char)18;
int zero = 0;
int var_11 = 2120830323;
unsigned int var_12 = 2787508106U;
unsigned long long int var_13 = 6907829956613138237ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
