#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35973;
short var_3 = (short)-5764;
unsigned short var_6 = (unsigned short)40382;
short var_8 = (short)23794;
unsigned int var_11 = 3382868801U;
int zero = 0;
short var_12 = (short)-32185;
signed char var_13 = (signed char)111;
short var_14 = (short)26107;
unsigned int var_15 = 1742718102U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
