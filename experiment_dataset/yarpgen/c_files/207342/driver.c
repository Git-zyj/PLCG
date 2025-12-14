#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 4063263532U;
unsigned long long int var_7 = 10207814800365915724ULL;
unsigned long long int var_10 = 6487415996095132189ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 11252927733858331433ULL;
unsigned char var_16 = (unsigned char)39;
unsigned char var_18 = (unsigned char)70;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = 1377199546;
unsigned char var_21 = (unsigned char)148;
unsigned int var_22 = 1908578580U;
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
