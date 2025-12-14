#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)10;
unsigned char var_2 = (unsigned char)11;
short var_5 = (short)21154;
long long int var_6 = -5256286803016780467LL;
signed char var_7 = (signed char)8;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-60;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)100;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
