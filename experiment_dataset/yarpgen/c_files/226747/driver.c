#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7412;
unsigned long long int var_14 = 18244497096219103325ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 143006761U;
short var_18 = (short)12919;
int zero = 0;
unsigned char var_20 = (unsigned char)165;
short var_21 = (short)6981;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
