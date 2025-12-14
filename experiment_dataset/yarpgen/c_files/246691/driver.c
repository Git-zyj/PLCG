#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1566026981U;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)37085;
int zero = 0;
unsigned short var_16 = (unsigned short)45720;
unsigned long long int var_17 = 4986828846070460297ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
