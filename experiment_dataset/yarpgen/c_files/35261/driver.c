#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3327;
signed char var_3 = (signed char)16;
int var_5 = -1284887946;
short var_9 = (short)17037;
int zero = 0;
signed char var_10 = (signed char)104;
unsigned short var_11 = (unsigned short)53516;
short var_12 = (short)30647;
short var_13 = (short)24789;
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
