#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)32;
unsigned char var_2 = (unsigned char)85;
unsigned short var_3 = (unsigned short)24317;
unsigned char var_5 = (unsigned char)227;
unsigned long long int var_6 = 9495342105845048865ULL;
unsigned char var_7 = (unsigned char)8;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 14857415843124355346ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
