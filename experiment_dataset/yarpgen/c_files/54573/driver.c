#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 366572988U;
int var_5 = 118035965;
unsigned int var_6 = 3858973457U;
unsigned int var_8 = 1635014313U;
short var_9 = (short)1227;
unsigned long long int var_10 = 5052735173423386784ULL;
int zero = 0;
unsigned long long int var_11 = 5355126224561216185ULL;
int var_12 = -1900577551;
int var_13 = 511200642;
void init() {
}

void checksum() {
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
