#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 185706490539890632LL;
unsigned short var_1 = (unsigned short)39502;
unsigned int var_4 = 187361717U;
long long int var_5 = -5352534131536742882LL;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)8456;
long long int var_14 = 1366630838576266060LL;
unsigned char var_15 = (unsigned char)121;
unsigned int var_16 = 4290429069U;
unsigned int var_17 = 3863747355U;
int zero = 0;
unsigned short var_18 = (unsigned short)10248;
unsigned long long int var_19 = 16222911860105500263ULL;
_Bool var_20 = (_Bool)1;
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
