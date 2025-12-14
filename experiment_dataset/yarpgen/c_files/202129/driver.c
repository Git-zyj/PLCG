#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 854486914U;
unsigned short var_7 = (unsigned short)2187;
long long int var_12 = 2210373374551971689LL;
int zero = 0;
short var_13 = (short)18943;
signed char var_14 = (signed char)-18;
short var_15 = (short)-13662;
void init() {
}

void checksum() {
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
