#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6801003120064772822LL;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)63935;
unsigned char var_8 = (unsigned char)1;
unsigned short var_12 = (unsigned short)56611;
int zero = 0;
unsigned short var_15 = (unsigned short)48649;
long long int var_16 = 7339148154271471901LL;
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
