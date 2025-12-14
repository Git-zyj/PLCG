#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6534642656110257945ULL;
unsigned char var_3 = (unsigned char)192;
unsigned char var_7 = (unsigned char)61;
signed char var_8 = (signed char)-33;
int zero = 0;
unsigned short var_13 = (unsigned short)47673;
unsigned int var_14 = 1212852841U;
long long int var_15 = -7082520942531642032LL;
unsigned short var_16 = (unsigned short)8829;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
