#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14010002714704146092ULL;
short var_5 = (short)8755;
unsigned long long int var_8 = 12687175659725431308ULL;
unsigned char var_9 = (unsigned char)7;
signed char var_10 = (signed char)-52;
long long int var_13 = -6873186529266004976LL;
unsigned char var_15 = (unsigned char)58;
int var_17 = 879113893;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)225;
unsigned short var_20 = (unsigned short)34960;
short var_21 = (short)17023;
signed char var_22 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
