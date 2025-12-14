#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)238;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)29604;
unsigned int var_4 = 2660465491U;
unsigned long long int var_6 = 8141405167762151864ULL;
int var_7 = 1396207217;
unsigned long long int var_8 = 1670610557766620103ULL;
int var_10 = -1020160838;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)7728;
int var_13 = -1192957731;
unsigned int var_14 = 2707373837U;
unsigned char var_15 = (unsigned char)49;
unsigned int var_16 = 3651801164U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
