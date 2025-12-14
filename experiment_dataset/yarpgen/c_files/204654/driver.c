#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8465;
short var_5 = (short)-18754;
long long int var_8 = -2663383979140643510LL;
int zero = 0;
unsigned char var_10 = (unsigned char)130;
unsigned char var_11 = (unsigned char)116;
short var_12 = (short)-12223;
long long int var_13 = -2089542161625356233LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
