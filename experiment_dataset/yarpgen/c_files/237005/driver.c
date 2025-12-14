#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 459425204;
unsigned char var_3 = (unsigned char)0;
unsigned int var_5 = 2579357412U;
unsigned int var_8 = 3141496085U;
short var_10 = (short)10978;
int zero = 0;
short var_12 = (short)13168;
unsigned char var_13 = (unsigned char)107;
unsigned short var_14 = (unsigned short)49933;
unsigned char var_15 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
