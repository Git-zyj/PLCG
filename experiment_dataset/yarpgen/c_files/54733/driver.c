#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)25;
unsigned char var_9 = (unsigned char)20;
unsigned short var_11 = (unsigned short)46600;
unsigned char var_12 = (unsigned char)8;
unsigned short var_15 = (unsigned short)47744;
unsigned char var_19 = (unsigned char)137;
int zero = 0;
unsigned char var_20 = (unsigned char)215;
unsigned short var_21 = (unsigned short)54925;
unsigned char var_22 = (unsigned char)232;
unsigned short var_23 = (unsigned short)62694;
void init() {
}

void checksum() {
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
