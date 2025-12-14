#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)151;
unsigned int var_3 = 229184527U;
short var_8 = (short)-18211;
unsigned short var_9 = (unsigned short)2209;
int zero = 0;
unsigned long long int var_10 = 13693966717755206752ULL;
short var_11 = (short)-20667;
short var_12 = (short)23736;
long long int var_13 = -870807043709646504LL;
int var_14 = 2015701119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
