#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4007298849888164189LL;
signed char var_1 = (signed char)31;
unsigned char var_4 = (unsigned char)118;
short var_5 = (short)29761;
unsigned char var_6 = (unsigned char)135;
long long int var_7 = -3992419796562130463LL;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)183;
int zero = 0;
short var_11 = (short)3053;
unsigned char var_12 = (unsigned char)108;
short var_13 = (short)10587;
unsigned long long int var_14 = 14835187293997881152ULL;
unsigned char var_15 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
