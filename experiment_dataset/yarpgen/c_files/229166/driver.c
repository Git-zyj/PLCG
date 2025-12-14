#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1120181148;
signed char var_4 = (signed char)-89;
unsigned char var_5 = (unsigned char)73;
short var_6 = (short)-6963;
unsigned int var_9 = 1087590511U;
short var_12 = (short)6330;
unsigned int var_14 = 547249269U;
int zero = 0;
short var_15 = (short)12948;
short var_16 = (short)-27960;
short var_17 = (short)18305;
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
