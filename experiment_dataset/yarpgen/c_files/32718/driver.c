#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47075;
unsigned short var_1 = (unsigned short)16901;
unsigned short var_2 = (unsigned short)58091;
unsigned short var_3 = (unsigned short)44595;
unsigned short var_5 = (unsigned short)36991;
unsigned short var_7 = (unsigned short)25790;
unsigned short var_9 = (unsigned short)64654;
unsigned short var_11 = (unsigned short)24774;
unsigned short var_12 = (unsigned short)42137;
unsigned short var_16 = (unsigned short)52134;
int zero = 0;
unsigned short var_19 = (unsigned short)49273;
unsigned short var_20 = (unsigned short)37526;
unsigned short var_21 = (unsigned short)37370;
unsigned short var_22 = (unsigned short)4751;
unsigned short var_23 = (unsigned short)52903;
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
