#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17295284706287087316ULL;
unsigned char var_2 = (unsigned char)126;
int var_3 = 964882558;
unsigned char var_4 = (unsigned char)227;
unsigned int var_6 = 3610637868U;
unsigned short var_10 = (unsigned short)49448;
int zero = 0;
unsigned int var_13 = 1210617758U;
unsigned int var_14 = 602949440U;
int var_15 = 812517809;
unsigned char var_16 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
