#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7901276036581214093ULL;
unsigned long long int var_1 = 8844666447887289975ULL;
short var_2 = (short)15082;
long long int var_3 = 2876850557828763928LL;
long long int var_4 = 1173805502903068308LL;
short var_5 = (short)11367;
unsigned long long int var_6 = 1814675734810964181ULL;
unsigned char var_7 = (unsigned char)73;
signed char var_8 = (signed char)76;
int var_12 = 1086121856;
int zero = 0;
int var_13 = 1723223991;
unsigned char var_14 = (unsigned char)75;
int var_15 = 873694280;
unsigned int var_16 = 1783867143U;
unsigned char var_17 = (unsigned char)229;
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
