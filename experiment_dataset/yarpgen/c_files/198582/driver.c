#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18063;
short var_1 = (short)-18493;
unsigned short var_2 = (unsigned short)48500;
unsigned char var_3 = (unsigned char)225;
unsigned char var_6 = (unsigned char)159;
short var_7 = (short)-11116;
unsigned int var_8 = 3676178392U;
int zero = 0;
unsigned char var_10 = (unsigned char)133;
short var_11 = (short)10901;
unsigned int var_12 = 3050493056U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
