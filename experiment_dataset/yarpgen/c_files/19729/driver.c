#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
unsigned int var_7 = 1840489617U;
int var_10 = -1006560659;
int zero = 0;
unsigned short var_15 = (unsigned short)53751;
unsigned short var_16 = (unsigned short)8065;
int var_17 = 920238956;
unsigned char var_18 = (unsigned char)67;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
