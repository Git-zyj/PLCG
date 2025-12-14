#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41869;
unsigned char var_2 = (unsigned char)28;
unsigned short var_3 = (unsigned short)38322;
unsigned short var_10 = (unsigned short)52238;
int zero = 0;
unsigned short var_11 = (unsigned short)12418;
unsigned char var_12 = (unsigned char)236;
unsigned short var_13 = (unsigned short)36257;
unsigned short var_14 = (unsigned short)330;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
