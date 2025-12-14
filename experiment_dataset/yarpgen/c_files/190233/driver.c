#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60028;
unsigned int var_7 = 2718722821U;
unsigned char var_8 = (unsigned char)178;
short var_9 = (short)14300;
unsigned short var_11 = (unsigned short)17630;
int zero = 0;
unsigned char var_15 = (unsigned char)190;
unsigned short var_16 = (unsigned short)52860;
void init() {
}

void checksum() {
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
