#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_6 = 8024837267424748587LL;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)23756;
unsigned char var_11 = (unsigned char)99;
int zero = 0;
unsigned short var_15 = (unsigned short)2704;
long long int var_16 = 1194770784139121929LL;
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
