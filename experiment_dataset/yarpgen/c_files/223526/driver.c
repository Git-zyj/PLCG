#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_17 = (unsigned char)0;
unsigned short var_19 = (unsigned short)28042;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)2761;
unsigned long long int var_22 = 16631949302407818554ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
