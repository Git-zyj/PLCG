#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1999010285U;
unsigned long long int var_2 = 7009233654977778761ULL;
unsigned short var_5 = (unsigned short)17123;
unsigned short var_6 = (unsigned short)64891;
unsigned int var_11 = 2368117430U;
int zero = 0;
unsigned long long int var_13 = 10953397584872687339ULL;
unsigned short var_14 = (unsigned short)45371;
unsigned int var_15 = 826204426U;
void init() {
}

void checksum() {
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
