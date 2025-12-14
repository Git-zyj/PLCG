#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)42;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)60782;
unsigned long long int var_4 = 9226264242290962837ULL;
unsigned short var_10 = (unsigned short)43032;
int zero = 0;
signed char var_11 = (signed char)87;
unsigned int var_12 = 363424416U;
void init() {
}

void checksum() {
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
