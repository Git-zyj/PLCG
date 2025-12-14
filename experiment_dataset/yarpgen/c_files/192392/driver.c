#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 868651537U;
short var_12 = (short)31923;
signed char var_15 = (signed char)24;
int zero = 0;
unsigned int var_17 = 3073942195U;
unsigned char var_18 = (unsigned char)181;
short var_19 = (short)-6340;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
