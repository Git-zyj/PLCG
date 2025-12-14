#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)183;
signed char var_11 = (signed char)-93;
unsigned short var_12 = (unsigned short)54422;
short var_14 = (short)16771;
int zero = 0;
unsigned short var_15 = (unsigned short)61050;
unsigned int var_16 = 2732997919U;
unsigned char var_17 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
