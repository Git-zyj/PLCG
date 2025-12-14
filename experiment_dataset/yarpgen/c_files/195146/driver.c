#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12961;
unsigned int var_10 = 4288647094U;
unsigned int var_13 = 2451783197U;
unsigned short var_15 = (unsigned short)50825;
int zero = 0;
unsigned short var_19 = (unsigned short)17390;
unsigned long long int var_20 = 4861162990696590476ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
