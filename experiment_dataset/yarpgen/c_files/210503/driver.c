#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 5669105319580132788ULL;
unsigned long long int var_4 = 2368709617254196714ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2003836806U;
unsigned char var_11 = (unsigned char)78;
int zero = 0;
unsigned int var_14 = 1022589780U;
short var_15 = (short)21393;
unsigned short var_16 = (unsigned short)27252;
void init() {
}

void checksum() {
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
