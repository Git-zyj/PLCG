#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)250;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-122;
int zero = 0;
signed char var_11 = (signed char)-20;
unsigned short var_12 = (unsigned short)35085;
unsigned short var_13 = (unsigned short)30776;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
