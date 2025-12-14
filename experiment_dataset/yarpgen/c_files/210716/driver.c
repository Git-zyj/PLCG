#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1629623142U;
unsigned char var_4 = (unsigned char)28;
unsigned short var_5 = (unsigned short)62646;
short var_6 = (short)-27089;
signed char var_7 = (signed char)61;
long long int var_9 = -4010631081016130685LL;
unsigned int var_10 = 3236541728U;
unsigned char var_13 = (unsigned char)10;
int zero = 0;
signed char var_16 = (signed char)-87;
_Bool var_17 = (_Bool)0;
int var_18 = 172064659;
unsigned short var_19 = (unsigned short)14330;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
