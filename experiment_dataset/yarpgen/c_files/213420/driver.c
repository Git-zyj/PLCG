#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 981646706U;
int var_2 = -1294092636;
unsigned int var_3 = 3180143974U;
unsigned int var_4 = 1287616106U;
unsigned short var_8 = (unsigned short)48040;
int zero = 0;
int var_11 = -938384214;
unsigned long long int var_12 = 12271989101668076138ULL;
void init() {
}

void checksum() {
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
