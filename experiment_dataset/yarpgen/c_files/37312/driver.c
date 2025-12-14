#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
unsigned char var_1 = (unsigned char)140;
unsigned char var_3 = (unsigned char)250;
unsigned char var_4 = (unsigned char)215;
unsigned char var_5 = (unsigned char)60;
unsigned char var_8 = (unsigned char)29;
unsigned char var_10 = (unsigned char)163;
unsigned char var_11 = (unsigned char)223;
unsigned char var_14 = (unsigned char)13;
unsigned char var_15 = (unsigned char)216;
unsigned char var_17 = (unsigned char)54;
int zero = 0;
unsigned char var_19 = (unsigned char)29;
unsigned char var_20 = (unsigned char)160;
unsigned char var_21 = (unsigned char)122;
unsigned char var_22 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
