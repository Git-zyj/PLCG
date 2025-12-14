#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28751;
int var_10 = -1660343338;
short var_11 = (short)-2269;
int zero = 0;
short var_12 = (short)-8657;
unsigned long long int var_13 = 11769626287525764088ULL;
unsigned long long int var_14 = 10098996099881186095ULL;
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
