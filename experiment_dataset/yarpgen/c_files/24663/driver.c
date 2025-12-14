#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-20;
unsigned short var_4 = (unsigned short)49501;
unsigned char var_6 = (unsigned char)60;
unsigned short var_16 = (unsigned short)48918;
int zero = 0;
unsigned long long int var_20 = 5634195717126748790ULL;
unsigned char var_21 = (unsigned char)140;
unsigned char var_22 = (unsigned char)63;
_Bool var_23 = (_Bool)1;
short var_24 = (short)16126;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
