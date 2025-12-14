#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6665512476955330017ULL;
unsigned int var_6 = 3868972401U;
unsigned char var_7 = (unsigned char)7;
unsigned int var_9 = 2496648217U;
unsigned int var_10 = 152781557U;
int var_14 = 111414604;
short var_15 = (short)-31224;
int zero = 0;
unsigned int var_18 = 926774915U;
short var_19 = (short)-10215;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
