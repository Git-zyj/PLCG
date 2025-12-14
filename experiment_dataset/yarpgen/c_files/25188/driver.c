#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8533331977931531717LL;
unsigned char var_1 = (unsigned char)70;
signed char var_7 = (signed char)-35;
unsigned short var_10 = (unsigned short)24006;
long long int var_14 = 4270164190992521855LL;
int var_16 = 906394663;
int zero = 0;
unsigned int var_18 = 1332097013U;
signed char var_19 = (signed char)-38;
unsigned short var_20 = (unsigned short)38378;
short var_21 = (short)3687;
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
