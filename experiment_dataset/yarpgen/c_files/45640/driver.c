#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)210;
unsigned short var_10 = (unsigned short)62093;
unsigned short var_11 = (unsigned short)725;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_20 = 188332927;
unsigned short var_21 = (unsigned short)62728;
void init() {
}

void checksum() {
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
