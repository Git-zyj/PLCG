#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30560;
unsigned short var_4 = (unsigned short)42234;
unsigned short var_10 = (unsigned short)12610;
unsigned short var_14 = (unsigned short)28689;
int zero = 0;
unsigned long long int var_16 = 8410045712210682772ULL;
unsigned char var_17 = (unsigned char)159;
void init() {
}

void checksum() {
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
