#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)148;
unsigned short var_4 = (unsigned short)2720;
short var_5 = (short)8110;
long long int var_8 = -1021549136204173942LL;
int zero = 0;
unsigned int var_13 = 3805187825U;
signed char var_14 = (signed char)-53;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
