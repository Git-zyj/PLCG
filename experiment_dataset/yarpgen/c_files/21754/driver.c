#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28832;
short var_8 = (short)2747;
unsigned long long int var_10 = 897429539881997958ULL;
int var_11 = -1290029403;
int zero = 0;
int var_15 = -2086480388;
signed char var_16 = (signed char)50;
unsigned short var_17 = (unsigned short)49749;
void init() {
}

void checksum() {
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
