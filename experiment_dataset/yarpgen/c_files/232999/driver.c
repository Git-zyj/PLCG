#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9986876696963407355ULL;
unsigned short var_4 = (unsigned short)5189;
signed char var_5 = (signed char)-94;
unsigned short var_7 = (unsigned short)54035;
unsigned char var_11 = (unsigned char)120;
unsigned long long int var_12 = 12565404790669392724ULL;
signed char var_15 = (signed char)65;
int zero = 0;
unsigned short var_16 = (unsigned short)44058;
signed char var_17 = (signed char)21;
long long int var_18 = -3907698290159852155LL;
unsigned long long int var_19 = 16702423430102779903ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
