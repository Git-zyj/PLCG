#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)127;
unsigned long long int var_4 = 17446599457833296551ULL;
unsigned char var_7 = (unsigned char)77;
signed char var_8 = (signed char)81;
int var_15 = 801255854;
int zero = 0;
unsigned int var_16 = 1277339909U;
unsigned long long int var_17 = 10821274255584110382ULL;
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
