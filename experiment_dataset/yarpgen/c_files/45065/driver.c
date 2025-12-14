#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17621;
unsigned int var_4 = 3285370896U;
unsigned short var_7 = (unsigned short)3045;
unsigned int var_8 = 1418974163U;
int zero = 0;
short var_10 = (short)2519;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-27279;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
