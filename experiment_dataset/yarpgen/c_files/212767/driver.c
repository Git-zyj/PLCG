#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4063259758U;
int var_8 = -949220193;
short var_15 = (short)-25496;
int zero = 0;
unsigned char var_18 = (unsigned char)175;
unsigned int var_19 = 3813664603U;
unsigned short var_20 = (unsigned short)2625;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
