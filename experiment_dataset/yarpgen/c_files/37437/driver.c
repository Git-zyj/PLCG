#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)28;
unsigned short var_4 = (unsigned short)46054;
unsigned short var_13 = (unsigned short)14945;
int zero = 0;
unsigned short var_15 = (unsigned short)30845;
unsigned int var_16 = 455091144U;
long long int var_17 = 9138903894831409424LL;
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
