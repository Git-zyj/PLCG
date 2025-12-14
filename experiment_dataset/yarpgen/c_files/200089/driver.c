#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)236;
unsigned long long int var_12 = 17275155637894592860ULL;
short var_13 = (short)5879;
int zero = 0;
short var_20 = (short)-4579;
int var_21 = -1194413479;
signed char var_22 = (signed char)4;
void init() {
}

void checksum() {
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
