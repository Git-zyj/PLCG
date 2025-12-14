#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 516835288U;
unsigned long long int var_4 = 10329251607670683159ULL;
unsigned char var_5 = (unsigned char)152;
unsigned short var_6 = (unsigned short)55687;
unsigned int var_8 = 2139740390U;
unsigned char var_12 = (unsigned char)3;
unsigned long long int var_13 = 2378071048630976109ULL;
int zero = 0;
unsigned long long int var_14 = 11389483349779719152ULL;
unsigned int var_15 = 2765088306U;
long long int var_16 = -448727957626563275LL;
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
