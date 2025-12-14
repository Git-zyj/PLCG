#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56708;
long long int var_3 = -2573062964896623215LL;
int var_11 = -1774806720;
int var_16 = -1136055239;
unsigned int var_17 = 3087604478U;
int zero = 0;
int var_19 = 1546769180;
signed char var_20 = (signed char)-43;
unsigned char var_21 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
