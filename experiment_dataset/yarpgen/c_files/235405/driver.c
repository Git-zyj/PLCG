#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)22;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 3430491721791969191ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)33533;
unsigned short var_13 = (unsigned short)49959;
unsigned char var_14 = (unsigned char)214;
unsigned short var_15 = (unsigned short)61300;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
