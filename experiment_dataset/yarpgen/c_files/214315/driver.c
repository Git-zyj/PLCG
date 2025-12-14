#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
unsigned int var_8 = 1880734832U;
unsigned int var_11 = 3551089754U;
int var_13 = 340073132;
int zero = 0;
unsigned short var_18 = (unsigned short)55996;
unsigned int var_19 = 4222708845U;
unsigned long long int var_20 = 1564006444007871918ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
