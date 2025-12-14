#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12521609156938064113ULL;
long long int var_4 = 2077922525535208736LL;
short var_9 = (short)2136;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 30554957U;
unsigned int var_13 = 3883535198U;
int zero = 0;
unsigned char var_14 = (unsigned char)92;
unsigned long long int var_15 = 8493393682212729196ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
