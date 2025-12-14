#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7446684357158635865LL;
long long int var_3 = 2328236632717032999LL;
short var_7 = (short)-6674;
unsigned int var_12 = 1033316215U;
int zero = 0;
unsigned char var_13 = (unsigned char)230;
unsigned short var_14 = (unsigned short)54089;
void init() {
}

void checksum() {
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
