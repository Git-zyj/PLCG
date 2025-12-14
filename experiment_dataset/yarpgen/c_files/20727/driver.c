#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8777784210266531820ULL;
signed char var_2 = (signed char)69;
int var_5 = -1159403137;
unsigned int var_7 = 446086175U;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)16;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-94;
signed char var_16 = (signed char)-3;
int zero = 0;
unsigned short var_19 = (unsigned short)50066;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)2450;
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
