#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30012;
unsigned int var_3 = 934099487U;
unsigned int var_4 = 1679238658U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 7365935222723557648ULL;
unsigned long long int var_10 = 1472072089771311494ULL;
short var_13 = (short)-12642;
signed char var_15 = (signed char)-38;
long long int var_16 = -6621648404017069328LL;
signed char var_17 = (signed char)-94;
int zero = 0;
unsigned int var_18 = 2387178199U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
