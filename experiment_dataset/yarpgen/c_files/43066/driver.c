#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1932345174U;
int var_5 = -1708918960;
unsigned char var_6 = (unsigned char)119;
unsigned long long int var_13 = 9095191114469600207ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)32758;
int var_15 = 1038473193;
unsigned short var_16 = (unsigned short)3991;
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
