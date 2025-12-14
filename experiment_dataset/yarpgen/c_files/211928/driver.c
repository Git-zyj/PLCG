#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3961031519U;
unsigned long long int var_1 = 17011791182887562513ULL;
unsigned int var_3 = 2136718889U;
unsigned short var_5 = (unsigned short)21778;
unsigned int var_10 = 2498356755U;
unsigned long long int var_11 = 9339203634358935728ULL;
int zero = 0;
signed char var_12 = (signed char)-21;
_Bool var_13 = (_Bool)1;
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
