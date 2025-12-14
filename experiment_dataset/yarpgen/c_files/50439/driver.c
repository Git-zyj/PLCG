#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
short var_1 = (short)-9460;
long long int var_2 = 7914109030696816260LL;
unsigned int var_4 = 3717155023U;
unsigned short var_5 = (unsigned short)30501;
int zero = 0;
signed char var_11 = (signed char)4;
long long int var_12 = 3641806583457753178LL;
unsigned char var_13 = (unsigned char)35;
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
