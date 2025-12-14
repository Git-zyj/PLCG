#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-17971;
unsigned short var_12 = (unsigned short)47427;
int zero = 0;
unsigned short var_19 = (unsigned short)11356;
long long int var_20 = -2768941604723735262LL;
short var_21 = (short)24729;
int var_22 = -1041077565;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
