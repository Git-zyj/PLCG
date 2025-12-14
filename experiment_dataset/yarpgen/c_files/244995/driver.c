#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13948997038390548848ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1866869024U;
int zero = 0;
unsigned int var_11 = 2433852945U;
unsigned char var_12 = (unsigned char)2;
unsigned char var_13 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
