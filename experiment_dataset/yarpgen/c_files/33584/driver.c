#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)92;
unsigned short var_4 = (unsigned short)12095;
int zero = 0;
unsigned long long int var_15 = 13828692959198296323ULL;
unsigned long long int var_16 = 11113714997668118999ULL;
long long int var_17 = -2949492808516271192LL;
unsigned char var_18 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
