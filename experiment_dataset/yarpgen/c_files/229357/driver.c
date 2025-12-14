#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3869941561U;
short var_1 = (short)-26664;
unsigned short var_2 = (unsigned short)43516;
unsigned short var_3 = (unsigned short)5435;
short var_7 = (short)20565;
unsigned int var_8 = 2499288099U;
int var_10 = 1212791498;
unsigned short var_11 = (unsigned short)47867;
unsigned short var_13 = (unsigned short)57639;
int zero = 0;
int var_15 = -926560139;
unsigned short var_16 = (unsigned short)4661;
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
