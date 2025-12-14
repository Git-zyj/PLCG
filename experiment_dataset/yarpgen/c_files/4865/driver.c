#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31269;
int var_3 = -421464979;
short var_4 = (short)16115;
signed char var_5 = (signed char)56;
unsigned short var_6 = (unsigned short)62117;
short var_7 = (short)14301;
int zero = 0;
unsigned short var_12 = (unsigned short)15681;
long long int var_13 = -3253690065657237883LL;
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
