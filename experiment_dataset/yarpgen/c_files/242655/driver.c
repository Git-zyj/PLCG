#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47182;
unsigned char var_4 = (unsigned char)12;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)43603;
unsigned char var_12 = (unsigned char)148;
signed char var_14 = (signed char)-19;
unsigned short var_15 = (unsigned short)42938;
unsigned long long int var_18 = 14603694376716589168ULL;
int zero = 0;
short var_19 = (short)-17981;
short var_20 = (short)11881;
unsigned char var_21 = (unsigned char)186;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
