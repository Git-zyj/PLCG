#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1749866122;
unsigned short var_4 = (unsigned short)22277;
int var_5 = 279340552;
short var_6 = (short)-18665;
int var_9 = -1769191128;
unsigned short var_11 = (unsigned short)60535;
int zero = 0;
unsigned int var_12 = 692779775U;
int var_13 = 724476496;
unsigned short var_14 = (unsigned short)62154;
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
