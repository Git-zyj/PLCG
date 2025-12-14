#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-8;
short var_7 = (short)15770;
long long int var_11 = -8565711190833582813LL;
unsigned char var_12 = (unsigned char)21;
unsigned short var_13 = (unsigned short)57669;
unsigned int var_14 = 2023374036U;
int zero = 0;
unsigned short var_15 = (unsigned short)17364;
unsigned short var_16 = (unsigned short)33371;
long long int var_17 = -6774627124079098695LL;
int var_18 = 695861046;
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
