#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34825;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
long long int var_13 = -6627429494781221274LL;
int zero = 0;
unsigned short var_16 = (unsigned short)23692;
unsigned char var_17 = (unsigned char)82;
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
