#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29734;
unsigned char var_4 = (unsigned char)194;
int var_8 = -1599929366;
long long int var_10 = -1946165423089772956LL;
unsigned int var_16 = 2095045112U;
int zero = 0;
unsigned long long int var_17 = 8546919248954398031ULL;
unsigned short var_18 = (unsigned short)54246;
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
