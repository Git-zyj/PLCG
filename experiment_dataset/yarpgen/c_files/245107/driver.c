#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1757074789;
short var_4 = (short)-23272;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-71;
long long int var_7 = 3804513220947155494LL;
unsigned long long int var_8 = 8308801438306561747ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)23574;
long long int var_13 = 5514183967715717835LL;
unsigned char var_14 = (unsigned char)234;
unsigned int var_15 = 1194242189U;
int zero = 0;
long long int var_16 = -7587956399537813213LL;
unsigned int var_17 = 1479883628U;
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
