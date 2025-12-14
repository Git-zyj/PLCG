#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1871929579;
unsigned int var_5 = 2758685654U;
unsigned short var_6 = (unsigned short)36852;
int var_7 = -484303537;
int zero = 0;
signed char var_12 = (signed char)43;
unsigned short var_13 = (unsigned short)24102;
unsigned int var_14 = 1269230646U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
