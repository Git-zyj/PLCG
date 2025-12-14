#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
signed char var_2 = (signed char)7;
unsigned int var_4 = 2034529364U;
int var_7 = -257054526;
short var_11 = (short)22847;
int zero = 0;
short var_14 = (short)-19713;
unsigned short var_15 = (unsigned short)21969;
void init() {
}

void checksum() {
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
