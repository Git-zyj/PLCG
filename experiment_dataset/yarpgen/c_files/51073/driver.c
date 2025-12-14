#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)62176;
unsigned short var_14 = (unsigned short)12885;
unsigned char var_16 = (unsigned char)36;
unsigned char var_17 = (unsigned char)17;
int zero = 0;
unsigned short var_19 = (unsigned short)31227;
int var_20 = 840425479;
short var_21 = (short)-4193;
unsigned short var_22 = (unsigned short)43535;
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
