#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1955222354U;
signed char var_4 = (signed char)-48;
unsigned char var_8 = (unsigned char)169;
unsigned short var_11 = (unsigned short)8145;
int zero = 0;
unsigned int var_12 = 3279297483U;
unsigned char var_13 = (unsigned char)148;
unsigned int var_14 = 3488989095U;
void init() {
}

void checksum() {
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
