#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1844067203;
unsigned char var_1 = (unsigned char)65;
short var_4 = (short)2139;
unsigned long long int var_8 = 3909543483203562668ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)195;
int var_16 = 666190877;
unsigned char var_17 = (unsigned char)94;
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
