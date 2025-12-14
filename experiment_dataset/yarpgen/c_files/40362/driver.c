#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)53626;
unsigned int var_5 = 235094333U;
unsigned int var_10 = 180153789U;
short var_12 = (short)8778;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 1291556286;
void init() {
}

void checksum() {
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
