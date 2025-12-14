#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
short var_1 = (short)18143;
unsigned char var_2 = (unsigned char)243;
unsigned char var_4 = (unsigned char)211;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)245;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)117;
short var_16 = (short)10173;
unsigned char var_17 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
