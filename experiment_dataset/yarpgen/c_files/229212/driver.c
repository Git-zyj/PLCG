#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6225699327916018737ULL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-84;
unsigned int var_4 = 2488777605U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)48;
short var_9 = (short)-22813;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)164;
int zero = 0;
unsigned long long int var_13 = 9375179655961351149ULL;
unsigned short var_14 = (unsigned short)3139;
short var_15 = (short)-27547;
unsigned char var_16 = (unsigned char)185;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
