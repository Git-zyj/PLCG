#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)239;
short var_4 = (short)4232;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)103;
int var_13 = -1416527986;
unsigned int var_15 = 2493774378U;
int zero = 0;
unsigned int var_16 = 527055073U;
unsigned int var_17 = 4231153242U;
unsigned long long int var_18 = 5381355632177240442ULL;
void init() {
}

void checksum() {
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
