#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15225;
long long int var_2 = -4893676273860494800LL;
unsigned int var_4 = 2121394718U;
short var_5 = (short)10671;
unsigned int var_6 = 3341746518U;
unsigned int var_8 = 1892023724U;
unsigned int var_10 = 628540265U;
short var_12 = (short)-14567;
int var_13 = 1092468834;
unsigned long long int var_14 = 4838972409722156717ULL;
short var_15 = (short)16109;
int var_16 = -735068623;
long long int var_17 = 7663984135283458218LL;
int zero = 0;
unsigned int var_20 = 2486130694U;
short var_21 = (short)-5577;
short var_22 = (short)11465;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
