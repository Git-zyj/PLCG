#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8534;
unsigned char var_2 = (unsigned char)217;
unsigned char var_7 = (unsigned char)110;
unsigned short var_11 = (unsigned short)35538;
unsigned int var_12 = 4278330365U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3138526731U;
int zero = 0;
unsigned char var_17 = (unsigned char)10;
short var_18 = (short)3217;
void init() {
}

void checksum() {
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
