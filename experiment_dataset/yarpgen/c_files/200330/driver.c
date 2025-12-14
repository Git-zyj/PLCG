#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4165;
short var_1 = (short)14589;
unsigned char var_2 = (unsigned char)105;
unsigned int var_4 = 2643586769U;
unsigned int var_6 = 249968602U;
int zero = 0;
int var_14 = -951853074;
unsigned short var_15 = (unsigned short)53453;
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
