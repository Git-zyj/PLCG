#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31811;
short var_1 = (short)-22737;
unsigned short var_2 = (unsigned short)52895;
unsigned short var_4 = (unsigned short)56210;
short var_5 = (short)-19575;
long long int var_7 = -4918678883412005435LL;
int zero = 0;
short var_20 = (short)7740;
unsigned short var_21 = (unsigned short)48985;
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
