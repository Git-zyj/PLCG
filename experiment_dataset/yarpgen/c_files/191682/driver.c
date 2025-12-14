#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4592;
int var_10 = -19548059;
unsigned int var_13 = 4228923295U;
unsigned char var_14 = (unsigned char)49;
unsigned short var_16 = (unsigned short)41885;
unsigned short var_17 = (unsigned short)62441;
int zero = 0;
unsigned short var_18 = (unsigned short)27624;
short var_19 = (short)12435;
unsigned short var_20 = (unsigned short)52130;
long long int var_21 = 2555833305523169215LL;
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
