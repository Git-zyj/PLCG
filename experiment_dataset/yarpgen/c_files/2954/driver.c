#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14834472197846297007ULL;
int var_2 = 2020206014;
unsigned long long int var_8 = 4230947473070201045ULL;
short var_11 = (short)-11042;
int zero = 0;
signed char var_20 = (signed char)-18;
unsigned short var_21 = (unsigned short)2066;
signed char var_22 = (signed char)1;
unsigned int var_23 = 1544111539U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
