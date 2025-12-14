#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1028366796U;
unsigned short var_3 = (unsigned short)6589;
_Bool var_4 = (_Bool)1;
unsigned int var_12 = 2425983103U;
unsigned char var_14 = (unsigned char)200;
int zero = 0;
unsigned short var_16 = (unsigned short)59559;
signed char var_17 = (signed char)-111;
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
