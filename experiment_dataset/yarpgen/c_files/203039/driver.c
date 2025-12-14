#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)26;
unsigned long long int var_3 = 7044037524234225946ULL;
unsigned int var_8 = 3795192631U;
int zero = 0;
unsigned short var_12 = (unsigned short)35401;
unsigned int var_13 = 4105427681U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
