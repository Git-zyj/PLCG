#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49786;
short var_2 = (short)22379;
unsigned char var_3 = (unsigned char)0;
unsigned int var_4 = 492447620U;
unsigned short var_9 = (unsigned short)13091;
unsigned char var_10 = (unsigned char)25;
unsigned int var_13 = 1202830756U;
int zero = 0;
unsigned int var_14 = 120935989U;
short var_15 = (short)4526;
short var_16 = (short)6275;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
