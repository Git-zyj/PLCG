#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2882237548U;
unsigned long long int var_4 = 739034854385296873ULL;
signed char var_13 = (signed char)44;
int zero = 0;
unsigned int var_20 = 167032890U;
signed char var_21 = (signed char)45;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)14024;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
