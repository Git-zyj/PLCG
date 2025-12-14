#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21378;
unsigned char var_4 = (unsigned char)183;
int var_7 = 315707219;
int var_13 = 2096736691;
int zero = 0;
unsigned int var_15 = 2687134581U;
signed char var_16 = (signed char)-43;
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
