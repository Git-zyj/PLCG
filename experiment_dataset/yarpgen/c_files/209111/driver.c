#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 873393145U;
unsigned long long int var_1 = 2406757698788327417ULL;
unsigned int var_4 = 4139077581U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 923087812U;
unsigned long long int var_9 = 14061495968574871558ULL;
signed char var_12 = (signed char)-122;
int var_14 = -584055888;
short var_15 = (short)-23669;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12180065661291707031ULL;
unsigned char var_18 = (unsigned char)21;
unsigned int var_19 = 1618570957U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
