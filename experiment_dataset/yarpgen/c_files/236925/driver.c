#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
signed char var_2 = (signed char)-122;
unsigned char var_3 = (unsigned char)36;
unsigned int var_4 = 4188386919U;
short var_6 = (short)5791;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)70;
int zero = 0;
signed char var_12 = (signed char)29;
signed char var_13 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
