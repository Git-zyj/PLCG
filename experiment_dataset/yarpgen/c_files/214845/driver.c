#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)72;
unsigned int var_5 = 60274658U;
unsigned short var_10 = (unsigned short)24470;
unsigned short var_12 = (unsigned short)60048;
unsigned char var_18 = (unsigned char)126;
int zero = 0;
unsigned int var_19 = 961887420U;
unsigned int var_20 = 4173855615U;
int var_21 = -299758877;
unsigned char var_22 = (unsigned char)224;
signed char var_23 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
