#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
unsigned char var_3 = (unsigned char)53;
unsigned int var_5 = 2190281717U;
unsigned int var_6 = 1538956079U;
unsigned int var_11 = 4286527269U;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 1129477027;
signed char var_14 = (signed char)-33;
void init() {
}

void checksum() {
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
