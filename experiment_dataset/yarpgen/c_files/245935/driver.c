#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11167939493962387311ULL;
unsigned char var_3 = (unsigned char)45;
unsigned long long int var_4 = 3104186569863112119ULL;
unsigned short var_7 = (unsigned short)9906;
int zero = 0;
short var_13 = (short)-31433;
signed char var_14 = (signed char)90;
_Bool var_15 = (_Bool)1;
long long int var_16 = 4237493102733498719LL;
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
