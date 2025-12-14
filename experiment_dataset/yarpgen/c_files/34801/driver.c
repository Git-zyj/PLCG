#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)19184;
short var_5 = (short)15144;
unsigned int var_6 = 1304402819U;
unsigned int var_7 = 412157138U;
short var_8 = (short)-21818;
int zero = 0;
unsigned int var_10 = 2735006756U;
int var_11 = -1252100368;
unsigned int var_12 = 2141422658U;
unsigned long long int var_13 = 12700697863697296158ULL;
unsigned short var_14 = (unsigned short)52894;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
