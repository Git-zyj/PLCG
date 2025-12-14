#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
int var_10 = -1424949170;
unsigned char var_11 = (unsigned char)65;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)45;
unsigned long long int var_14 = 1990386177487030598ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)7673;
unsigned char var_20 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
