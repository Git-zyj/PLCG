#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -47151448;
signed char var_7 = (signed char)84;
long long int var_11 = 2838735496417921017LL;
int zero = 0;
unsigned int var_12 = 1336508212U;
signed char var_13 = (signed char)50;
short var_14 = (short)19415;
long long int var_15 = 509772437827430303LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
