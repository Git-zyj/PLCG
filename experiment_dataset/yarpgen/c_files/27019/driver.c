#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2851353975814177988ULL;
signed char var_3 = (signed char)52;
unsigned short var_4 = (unsigned short)45925;
unsigned long long int var_6 = 8391807620329602417ULL;
short var_9 = (short)9078;
int var_10 = -1871514108;
short var_12 = (short)-22745;
unsigned int var_13 = 1263839056U;
unsigned long long int var_14 = 11277761781763170357ULL;
short var_15 = (short)-6952;
int zero = 0;
unsigned short var_16 = (unsigned short)11735;
int var_17 = 172868666;
_Bool var_18 = (_Bool)1;
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
