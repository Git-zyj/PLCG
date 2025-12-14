#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)140;
unsigned long long int var_5 = 6257661319776302048ULL;
unsigned short var_8 = (unsigned short)18606;
unsigned char var_9 = (unsigned char)170;
unsigned short var_10 = (unsigned short)18109;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)14;
unsigned int var_15 = 2687795167U;
unsigned short var_16 = (unsigned short)55589;
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
