#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1470593566U;
signed char var_6 = (signed char)-94;
signed char var_12 = (signed char)62;
int zero = 0;
unsigned short var_17 = (unsigned short)6673;
long long int var_18 = -7103242556981650017LL;
void init() {
}

void checksum() {
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
