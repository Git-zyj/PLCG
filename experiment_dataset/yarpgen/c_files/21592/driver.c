#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)11;
short var_9 = (short)29344;
unsigned char var_10 = (unsigned char)28;
unsigned char var_11 = (unsigned char)255;
short var_13 = (short)3814;
unsigned short var_14 = (unsigned short)28152;
int zero = 0;
short var_19 = (short)-21394;
short var_20 = (short)15754;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
