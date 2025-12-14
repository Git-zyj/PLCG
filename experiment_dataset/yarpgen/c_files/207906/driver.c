#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1240601688U;
short var_4 = (short)-16247;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)41;
int zero = 0;
unsigned int var_11 = 2532660032U;
short var_12 = (short)-11522;
short var_13 = (short)-9581;
unsigned char var_14 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
