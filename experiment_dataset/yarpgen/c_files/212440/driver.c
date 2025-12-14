#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8591454376887381535LL;
signed char var_1 = (signed char)-16;
short var_6 = (short)-24229;
unsigned long long int var_7 = 18354629986660451176ULL;
unsigned char var_8 = (unsigned char)36;
unsigned int var_10 = 3798984607U;
short var_12 = (short)22140;
int zero = 0;
unsigned char var_15 = (unsigned char)211;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 4741410876663057040ULL;
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
