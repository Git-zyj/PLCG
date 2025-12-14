#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)130;
unsigned long long int var_8 = 9348359967728278804ULL;
unsigned char var_9 = (unsigned char)188;
unsigned char var_12 = (unsigned char)221;
unsigned short var_14 = (unsigned short)32058;
long long int var_15 = -8597319128582824605LL;
short var_16 = (short)2188;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 138542884;
void init() {
}

void checksum() {
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
