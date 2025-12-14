#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2205687313994485761LL;
unsigned int var_7 = 3872391575U;
short var_12 = (short)19085;
unsigned short var_13 = (unsigned short)32346;
int zero = 0;
short var_15 = (short)-26085;
short var_16 = (short)-13995;
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
