#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)16181;
unsigned char var_2 = (unsigned char)1;
signed char var_3 = (signed char)90;
signed char var_4 = (signed char)58;
short var_5 = (short)8324;
unsigned short var_7 = (unsigned short)34619;
int var_9 = -850702061;
int zero = 0;
unsigned short var_10 = (unsigned short)42466;
unsigned short var_11 = (unsigned short)31779;
short var_12 = (short)2410;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
