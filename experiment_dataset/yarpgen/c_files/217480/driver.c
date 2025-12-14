#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
unsigned int var_2 = 1858465903U;
unsigned int var_8 = 1768277141U;
short var_10 = (short)32632;
short var_11 = (short)-23232;
int zero = 0;
short var_12 = (short)-27092;
unsigned short var_13 = (unsigned short)52518;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
