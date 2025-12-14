#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 561483723U;
unsigned char var_2 = (unsigned char)102;
short var_5 = (short)-6381;
int zero = 0;
unsigned char var_14 = (unsigned char)70;
int var_15 = 1187894334;
short var_16 = (short)-9487;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
