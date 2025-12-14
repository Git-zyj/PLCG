#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
unsigned int var_2 = 4145628654U;
unsigned int var_4 = 3680707233U;
unsigned short var_6 = (unsigned short)35506;
int zero = 0;
unsigned char var_10 = (unsigned char)178;
long long int var_11 = 2040321858423092722LL;
signed char var_12 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
