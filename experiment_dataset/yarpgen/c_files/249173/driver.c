#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 2086582034092578607ULL;
unsigned short var_3 = (unsigned short)26413;
unsigned short var_5 = (unsigned short)61092;
int var_6 = 244181536;
int var_8 = 15456646;
short var_9 = (short)-27914;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)52566;
int var_15 = 1249842399;
signed char var_16 = (signed char)26;
void init() {
}

void checksum() {
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
