#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)191;
short var_5 = (short)-7700;
int var_7 = -2122820944;
int zero = 0;
int var_12 = 1625006901;
unsigned short var_13 = (unsigned short)2754;
unsigned long long int var_14 = 10025104396753572936ULL;
unsigned long long int var_15 = 17689763419469928021ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
