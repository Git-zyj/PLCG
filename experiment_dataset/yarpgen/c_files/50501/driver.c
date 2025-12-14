#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21313;
unsigned short var_1 = (unsigned short)49537;
unsigned char var_2 = (unsigned char)153;
int var_3 = 1680313142;
int var_5 = -296821671;
unsigned int var_6 = 3617053460U;
short var_12 = (short)-21742;
int zero = 0;
unsigned long long int var_13 = 7895060942827380151ULL;
unsigned int var_14 = 252520745U;
int var_15 = -684496556;
signed char var_16 = (signed char)-118;
unsigned char var_17 = (unsigned char)109;
short var_18 = (short)30848;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-6624;
unsigned int var_21 = 3435393715U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
