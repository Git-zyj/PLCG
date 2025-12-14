#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3806973913840419420ULL;
signed char var_5 = (signed char)-2;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)18121;
int zero = 0;
int var_14 = 911001471;
unsigned int var_15 = 850595881U;
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
