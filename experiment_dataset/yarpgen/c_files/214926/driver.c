#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6269934554763444515ULL;
unsigned short var_1 = (unsigned short)60390;
unsigned long long int var_3 = 331648058076308393ULL;
signed char var_4 = (signed char)-45;
unsigned short var_5 = (unsigned short)15321;
unsigned char var_8 = (unsigned char)160;
long long int var_10 = -8164615158786676089LL;
unsigned int var_12 = 1793542914U;
unsigned short var_13 = (unsigned short)36768;
long long int var_14 = 1363304097056610902LL;
unsigned short var_16 = (unsigned short)20740;
int zero = 0;
signed char var_17 = (signed char)-79;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
