#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1038532582;
long long int var_4 = -502661043909471846LL;
unsigned short var_5 = (unsigned short)14679;
unsigned int var_6 = 1416569245U;
unsigned short var_7 = (unsigned short)43199;
long long int var_9 = 441450485282724046LL;
long long int var_10 = -7896322951275282919LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6546318332073773918LL;
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
