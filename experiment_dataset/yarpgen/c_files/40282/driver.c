#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 283301086;
unsigned char var_3 = (unsigned char)60;
unsigned char var_10 = (unsigned char)113;
_Bool var_14 = (_Bool)0;
int var_16 = 98190008;
int zero = 0;
unsigned char var_20 = (unsigned char)117;
short var_21 = (short)-3431;
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
