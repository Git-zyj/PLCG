#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)27;
short var_6 = (short)21793;
short var_8 = (short)11153;
int var_11 = -899633460;
short var_14 = (short)14909;
unsigned char var_17 = (unsigned char)203;
int zero = 0;
int var_20 = 1147526367;
int var_21 = 779866699;
int var_22 = 276457130;
void init() {
}

void checksum() {
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
