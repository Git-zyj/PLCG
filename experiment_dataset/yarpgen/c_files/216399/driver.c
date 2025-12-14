#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7122115380654646786LL;
unsigned char var_4 = (unsigned char)229;
_Bool var_7 = (_Bool)0;
unsigned char var_12 = (unsigned char)97;
int zero = 0;
unsigned char var_14 = (unsigned char)227;
unsigned int var_15 = 639277698U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
