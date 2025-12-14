#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6336918685280750529LL;
unsigned long long int var_4 = 16971798493681390514ULL;
unsigned long long int var_5 = 12303210819661977132ULL;
unsigned short var_6 = (unsigned short)64854;
int var_8 = 828478107;
unsigned short var_9 = (unsigned short)23516;
signed char var_10 = (signed char)30;
unsigned long long int var_11 = 16132366249650721862ULL;
unsigned long long int var_12 = 1532074970703188050ULL;
unsigned short var_14 = (unsigned short)56804;
signed char var_17 = (signed char)103;
int zero = 0;
int var_18 = 1273228621;
signed char var_19 = (signed char)68;
unsigned long long int var_20 = 6878371539481518558ULL;
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
