#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)33234;
unsigned int var_8 = 1233585409U;
short var_12 = (short)-31370;
unsigned long long int var_15 = 598214217943162442ULL;
signed char var_17 = (signed char)22;
int zero = 0;
unsigned int var_18 = 777078356U;
short var_19 = (short)12393;
int var_20 = 1545170516;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
