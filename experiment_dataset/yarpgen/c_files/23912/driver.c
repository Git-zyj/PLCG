#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7610235593904920883ULL;
unsigned int var_7 = 764641298U;
short var_8 = (short)4712;
unsigned char var_10 = (unsigned char)198;
unsigned char var_11 = (unsigned char)254;
int zero = 0;
unsigned long long int var_14 = 1007485574256222121ULL;
unsigned long long int var_15 = 13954758519407053911ULL;
unsigned char var_16 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
