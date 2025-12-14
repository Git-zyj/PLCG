#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8853;
unsigned short var_2 = (unsigned short)58240;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)12938;
unsigned int var_6 = 482321242U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)120;
unsigned char var_11 = (unsigned char)67;
short var_13 = (short)11835;
unsigned char var_14 = (unsigned char)210;
short var_15 = (short)13317;
unsigned long long int var_16 = 18084687160457573511ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)190;
unsigned short var_19 = (unsigned short)60413;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
