#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
short var_5 = (short)-17349;
unsigned int var_7 = 1098820042U;
unsigned int var_8 = 301678064U;
unsigned int var_9 = 2194724460U;
unsigned int var_10 = 3810253266U;
unsigned short var_12 = (unsigned short)43977;
int zero = 0;
unsigned short var_13 = (unsigned short)24734;
signed char var_14 = (signed char)36;
unsigned short var_15 = (unsigned short)18255;
void init() {
}

void checksum() {
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
