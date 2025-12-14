#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)26470;
short var_8 = (short)21447;
unsigned short var_10 = (unsigned short)62470;
short var_15 = (short)17702;
int zero = 0;
unsigned short var_16 = (unsigned short)14373;
unsigned short var_17 = (unsigned short)30282;
void init() {
}

void checksum() {
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
