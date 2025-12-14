#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)22652;
unsigned long long int var_7 = 7229448392697225646ULL;
long long int var_11 = -3402682145542846907LL;
signed char var_13 = (signed char)6;
int zero = 0;
unsigned int var_15 = 1064191067U;
long long int var_16 = 6206684030267450068LL;
void init() {
}

void checksum() {
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
