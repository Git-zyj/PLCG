#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49038;
unsigned long long int var_4 = 2091175218003157040ULL;
unsigned int var_7 = 2119781060U;
unsigned int var_8 = 3184140587U;
long long int var_9 = 4744075728796322792LL;
unsigned int var_11 = 3596895261U;
signed char var_13 = (signed char)-44;
int zero = 0;
signed char var_14 = (signed char)73;
unsigned int var_15 = 1119388931U;
void init() {
}

void checksum() {
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
