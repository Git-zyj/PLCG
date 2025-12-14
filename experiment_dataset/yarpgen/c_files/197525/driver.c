#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1833515920;
_Bool var_5 = (_Bool)1;
unsigned int var_13 = 3977089577U;
unsigned short var_15 = (unsigned short)14345;
unsigned char var_16 = (unsigned char)192;
unsigned short var_17 = (unsigned short)63069;
int var_18 = 394279216;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -490480121;
int var_21 = 955784711;
unsigned char var_22 = (unsigned char)239;
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
