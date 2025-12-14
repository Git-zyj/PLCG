#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 761886500904289717ULL;
signed char var_6 = (signed char)65;
long long int var_10 = -8082038229017634026LL;
int zero = 0;
short var_14 = (short)-26428;
unsigned int var_15 = 2953757685U;
unsigned long long int var_16 = 6299273837258693714ULL;
unsigned char var_17 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
