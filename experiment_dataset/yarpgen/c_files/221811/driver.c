#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 589851564;
int var_4 = 1680758993;
unsigned short var_5 = (unsigned short)21145;
signed char var_7 = (signed char)103;
int zero = 0;
unsigned short var_19 = (unsigned short)14504;
unsigned short var_20 = (unsigned short)12044;
unsigned int var_21 = 129904958U;
int var_22 = 1802457833;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
