#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2392091976U;
unsigned int var_8 = 1936082592U;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-84;
unsigned int var_16 = 2978116826U;
unsigned short var_17 = (unsigned short)17928;
int var_18 = -1286038120;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
