#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7357;
unsigned int var_2 = 3933455329U;
_Bool var_4 = (_Bool)0;
long long int var_8 = -731382206954409223LL;
unsigned short var_9 = (unsigned short)24229;
int var_13 = 1356572080;
int zero = 0;
unsigned int var_16 = 4268613613U;
signed char var_17 = (signed char)-27;
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
