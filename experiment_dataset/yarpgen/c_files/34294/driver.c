#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 81934310U;
long long int var_3 = -2265420268592199115LL;
long long int var_6 = -9115321981174024365LL;
unsigned char var_9 = (unsigned char)163;
unsigned short var_10 = (unsigned short)30952;
int zero = 0;
unsigned char var_13 = (unsigned char)90;
int var_14 = -220543157;
int var_15 = -1142813619;
long long int var_16 = -5407440943436830878LL;
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
