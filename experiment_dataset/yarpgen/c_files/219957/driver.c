#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11512;
int var_7 = -1929874383;
unsigned int var_8 = 438273185U;
unsigned int var_9 = 730153494U;
unsigned int var_10 = 2473232174U;
short var_12 = (short)-17885;
unsigned short var_17 = (unsigned short)6954;
int zero = 0;
unsigned short var_20 = (unsigned short)34297;
unsigned char var_21 = (unsigned char)95;
unsigned char var_22 = (unsigned char)13;
short var_23 = (short)12979;
unsigned long long int var_24 = 11412938453029388019ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
