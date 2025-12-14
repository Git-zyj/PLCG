#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63078;
unsigned short var_1 = (unsigned short)18749;
unsigned short var_2 = (unsigned short)22208;
unsigned short var_3 = (unsigned short)63496;
unsigned short var_4 = (unsigned short)12171;
unsigned short var_6 = (unsigned short)2916;
unsigned short var_7 = (unsigned short)32443;
unsigned short var_8 = (unsigned short)10035;
unsigned short var_9 = (unsigned short)48133;
int zero = 0;
unsigned short var_10 = (unsigned short)22083;
unsigned short var_11 = (unsigned short)63605;
unsigned short var_12 = (unsigned short)56641;
unsigned short var_13 = (unsigned short)26214;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
