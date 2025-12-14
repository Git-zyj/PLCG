#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4267351474U;
unsigned char var_6 = (unsigned char)134;
unsigned long long int var_7 = 1625798772007078740ULL;
unsigned int var_10 = 2855321014U;
unsigned long long int var_12 = 10868556667515465921ULL;
unsigned short var_14 = (unsigned short)48945;
unsigned char var_16 = (unsigned char)175;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)1147;
unsigned int var_20 = 1400166610U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2317489926U;
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
