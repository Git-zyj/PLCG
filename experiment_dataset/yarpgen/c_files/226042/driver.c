#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11857;
_Bool var_8 = (_Bool)1;
unsigned char var_13 = (unsigned char)128;
int var_14 = -788815989;
int zero = 0;
unsigned char var_16 = (unsigned char)131;
int var_17 = -360370066;
unsigned long long int var_18 = 1446396840495820169ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
