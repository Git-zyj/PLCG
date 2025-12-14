#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_4 = (unsigned short)32969;
unsigned int var_6 = 2366353423U;
int var_8 = 147017441;
unsigned int var_12 = 4062035339U;
unsigned char var_13 = (unsigned char)136;
unsigned char var_14 = (unsigned char)148;
int zero = 0;
unsigned short var_15 = (unsigned short)40233;
_Bool var_16 = (_Bool)1;
short var_17 = (short)11477;
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
