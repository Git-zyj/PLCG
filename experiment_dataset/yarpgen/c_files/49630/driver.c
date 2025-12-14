#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2292474434876018512LL;
unsigned short var_2 = (unsigned short)1662;
unsigned int var_10 = 537761734U;
int zero = 0;
unsigned int var_14 = 1402956316U;
signed char var_15 = (signed char)-94;
unsigned char var_16 = (unsigned char)228;
unsigned int var_17 = 1554996364U;
unsigned char var_18 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
