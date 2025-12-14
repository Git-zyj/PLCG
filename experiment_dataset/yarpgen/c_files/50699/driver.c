#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65012;
unsigned int var_6 = 4163315852U;
unsigned char var_8 = (unsigned char)255;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)24;
unsigned int var_12 = 1951808768U;
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
