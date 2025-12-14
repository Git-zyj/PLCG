#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)4;
int var_4 = 855730831;
unsigned short var_5 = (unsigned short)22564;
unsigned short var_7 = (unsigned short)29343;
unsigned short var_8 = (unsigned short)34479;
unsigned short var_10 = (unsigned short)60358;
int zero = 0;
signed char var_11 = (signed char)51;
_Bool var_12 = (_Bool)0;
short var_13 = (short)1514;
unsigned short var_14 = (unsigned short)20677;
short var_15 = (short)-18050;
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
