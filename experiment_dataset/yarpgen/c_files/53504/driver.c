#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41862;
long long int var_2 = -3325985154117690833LL;
int var_3 = 282510884;
long long int var_6 = -3601070659108877990LL;
unsigned int var_7 = 1651356548U;
unsigned short var_8 = (unsigned short)33066;
int zero = 0;
unsigned char var_11 = (unsigned char)35;
unsigned char var_12 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
