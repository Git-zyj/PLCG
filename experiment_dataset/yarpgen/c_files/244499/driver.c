#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16213;
unsigned long long int var_1 = 12973247701923249831ULL;
unsigned int var_2 = 1942699180U;
unsigned long long int var_3 = 10033162211774706580ULL;
unsigned short var_6 = (unsigned short)34105;
short var_8 = (short)-25985;
unsigned int var_10 = 3576339650U;
unsigned int var_12 = 857576675U;
int zero = 0;
unsigned int var_15 = 2147922638U;
short var_16 = (short)-2444;
int var_17 = -66363141;
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
