#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)17756;
short var_6 = (short)13691;
short var_7 = (short)23421;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)25;
unsigned short var_11 = (unsigned short)56970;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
