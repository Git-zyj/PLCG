#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47178;
short var_4 = (short)-22815;
signed char var_14 = (signed char)122;
int zero = 0;
unsigned short var_19 = (unsigned short)2806;
int var_20 = -1197273957;
signed char var_21 = (signed char)16;
int var_22 = 947563240;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
