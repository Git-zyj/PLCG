#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -817306797290285075LL;
int var_4 = -1132765438;
int var_9 = 21309549;
long long int var_10 = -6538832273132657067LL;
unsigned long long int var_11 = 2607033562198257950ULL;
unsigned int var_13 = 1914628992U;
signed char var_14 = (signed char)-26;
signed char var_15 = (signed char)-85;
int zero = 0;
long long int var_16 = -5048935486664272141LL;
unsigned short var_17 = (unsigned short)43696;
unsigned int var_18 = 3699514161U;
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
