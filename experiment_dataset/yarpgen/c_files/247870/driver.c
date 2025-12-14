#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-22048;
signed char var_11 = (signed char)6;
unsigned char var_12 = (unsigned char)16;
unsigned long long int var_14 = 3542846815505898870ULL;
int zero = 0;
unsigned long long int var_20 = 6973516619153471063ULL;
signed char var_21 = (signed char)-65;
unsigned long long int var_22 = 14777136730758576590ULL;
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
