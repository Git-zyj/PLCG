#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10226579854773506211ULL;
unsigned char var_8 = (unsigned char)163;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 6035069239356901053ULL;
short var_14 = (short)-20220;
unsigned char var_15 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
