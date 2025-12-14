#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6567869324628488206ULL;
unsigned short var_3 = (unsigned short)42786;
int var_4 = 1964114092;
unsigned short var_5 = (unsigned short)6772;
short var_11 = (short)11868;
int var_14 = 2075456662;
unsigned long long int var_15 = 1758232026900694770ULL;
int zero = 0;
short var_16 = (short)-5226;
int var_17 = -1597584605;
unsigned int var_18 = 1941291908U;
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
