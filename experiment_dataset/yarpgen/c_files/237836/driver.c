#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18175477152137840776ULL;
unsigned long long int var_7 = 3869099384024490295ULL;
int zero = 0;
signed char var_15 = (signed char)-114;
signed char var_16 = (signed char)99;
unsigned short var_17 = (unsigned short)59025;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
