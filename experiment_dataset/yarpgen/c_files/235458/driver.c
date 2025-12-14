#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 49070411U;
int var_3 = -315169845;
unsigned short var_4 = (unsigned short)6932;
short var_7 = (short)9144;
unsigned short var_9 = (unsigned short)47562;
unsigned short var_11 = (unsigned short)21047;
short var_12 = (short)19975;
int zero = 0;
unsigned long long int var_16 = 11094760370366961421ULL;
unsigned char var_17 = (unsigned char)42;
signed char var_18 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
