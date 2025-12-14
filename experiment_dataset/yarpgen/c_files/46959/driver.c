#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8574;
short var_1 = (short)23915;
_Bool var_2 = (_Bool)1;
int var_3 = 143234720;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)175;
signed char var_6 = (signed char)99;
int var_7 = -673714942;
unsigned int var_9 = 1874342649U;
signed char var_10 = (signed char)87;
signed char var_12 = (signed char)-37;
int zero = 0;
unsigned char var_13 = (unsigned char)135;
short var_14 = (short)28394;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
