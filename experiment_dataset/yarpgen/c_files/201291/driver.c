#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_4 = (unsigned short)21039;
unsigned short var_6 = (unsigned short)46605;
unsigned char var_9 = (unsigned char)230;
unsigned long long int var_12 = 8438193206152474880ULL;
unsigned long long int var_14 = 9897876824038943139ULL;
unsigned char var_17 = (unsigned char)229;
int zero = 0;
unsigned char var_18 = (unsigned char)3;
short var_19 = (short)30480;
void init() {
}

void checksum() {
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
