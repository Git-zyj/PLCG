#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15964;
unsigned int var_2 = 2388746812U;
signed char var_3 = (signed char)122;
unsigned int var_4 = 3903695567U;
unsigned short var_5 = (unsigned short)45403;
long long int var_7 = -575455602512114424LL;
long long int var_8 = 2759567443926505871LL;
unsigned long long int var_10 = 1602276812156355791ULL;
unsigned int var_11 = 90835163U;
int zero = 0;
signed char var_13 = (signed char)-104;
unsigned char var_14 = (unsigned char)107;
void init() {
}

void checksum() {
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
