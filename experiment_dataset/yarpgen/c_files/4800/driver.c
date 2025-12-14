#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -1204117920;
unsigned short var_3 = (unsigned short)14725;
_Bool var_4 = (_Bool)0;
int var_5 = 340082114;
unsigned char var_6 = (unsigned char)21;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = 220518559;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
