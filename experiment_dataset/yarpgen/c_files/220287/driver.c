#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)132;
unsigned char var_15 = (unsigned char)168;
unsigned char var_18 = (unsigned char)100;
int zero = 0;
unsigned short var_20 = (unsigned short)31240;
unsigned int var_21 = 607550019U;
signed char var_22 = (signed char)90;
void init() {
}

void checksum() {
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
