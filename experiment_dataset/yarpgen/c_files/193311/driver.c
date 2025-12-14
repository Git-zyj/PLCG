#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)116;
unsigned short var_7 = (unsigned short)25207;
unsigned short var_9 = (unsigned short)18023;
unsigned short var_10 = (unsigned short)32699;
int zero = 0;
unsigned char var_13 = (unsigned char)48;
int var_14 = -916587409;
unsigned short var_15 = (unsigned short)3336;
unsigned short var_16 = (unsigned short)12241;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
