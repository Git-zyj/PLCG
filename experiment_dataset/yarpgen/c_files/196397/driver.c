#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)61214;
unsigned char var_9 = (unsigned char)23;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)55015;
int zero = 0;
unsigned char var_16 = (unsigned char)42;
unsigned char var_17 = (unsigned char)140;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
