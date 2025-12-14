#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10292;
unsigned int var_5 = 4249806334U;
unsigned short var_6 = (unsigned short)61946;
unsigned int var_7 = 3789514365U;
signed char var_13 = (signed char)58;
unsigned char var_15 = (unsigned char)174;
int zero = 0;
short var_16 = (short)-13435;
short var_17 = (short)16120;
void init() {
}

void checksum() {
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
