#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62865;
unsigned long long int var_4 = 16076855166119056440ULL;
signed char var_5 = (signed char)84;
unsigned int var_7 = 3667625078U;
int zero = 0;
unsigned short var_11 = (unsigned short)896;
long long int var_12 = -4579260688343918611LL;
unsigned short var_13 = (unsigned short)43629;
short var_14 = (short)1125;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
