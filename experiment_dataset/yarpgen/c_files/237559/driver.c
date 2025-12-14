#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1256999530;
short var_4 = (short)-16051;
unsigned char var_7 = (unsigned char)212;
unsigned int var_8 = 2920578679U;
unsigned char var_13 = (unsigned char)208;
int zero = 0;
unsigned short var_15 = (unsigned short)20915;
unsigned char var_16 = (unsigned char)133;
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
