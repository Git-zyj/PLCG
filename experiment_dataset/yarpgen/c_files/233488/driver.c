#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5293304074580267514LL;
unsigned int var_5 = 1835313911U;
unsigned short var_8 = (unsigned short)33058;
unsigned short var_9 = (unsigned short)8698;
short var_10 = (short)23611;
short var_12 = (short)30993;
int zero = 0;
int var_13 = -808561024;
unsigned int var_14 = 1038139228U;
_Bool var_15 = (_Bool)1;
int var_16 = -1175367290;
unsigned long long int var_17 = 8159194339501852243ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
