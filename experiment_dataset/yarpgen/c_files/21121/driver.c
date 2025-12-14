#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -133477880;
short var_6 = (short)-26924;
unsigned short var_8 = (unsigned short)14163;
int zero = 0;
unsigned short var_15 = (unsigned short)32215;
unsigned int var_16 = 1223632075U;
int var_17 = 39576711;
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
