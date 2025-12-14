#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1419042639;
int var_1 = -735814421;
int var_2 = -1318734912;
long long int var_6 = 518322804165539830LL;
unsigned int var_7 = 1620405101U;
unsigned int var_9 = 223917557U;
unsigned char var_12 = (unsigned char)193;
long long int var_14 = 245061639466086474LL;
unsigned short var_15 = (unsigned short)4555;
long long int var_16 = 1725491751487664937LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = -1857337028261407057LL;
int var_21 = -1169479376;
long long int var_22 = 3874038833803476970LL;
long long int var_23 = 1609944042649903785LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
