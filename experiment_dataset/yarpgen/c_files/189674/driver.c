#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
unsigned short var_5 = (unsigned short)56534;
_Bool var_7 = (_Bool)1;
short var_14 = (short)29205;
int zero = 0;
int var_16 = -343259000;
unsigned short var_17 = (unsigned short)15055;
unsigned short var_18 = (unsigned short)33557;
void init() {
}

void checksum() {
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
