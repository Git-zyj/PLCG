#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7030;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)99;
unsigned char var_5 = (unsigned char)3;
short var_6 = (short)2086;
signed char var_8 = (signed char)-50;
signed char var_9 = (signed char)53;
unsigned int var_14 = 2598615488U;
int var_18 = -1248557339;
int zero = 0;
int var_19 = -1439368112;
int var_20 = -691879329;
short var_21 = (short)-6737;
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
