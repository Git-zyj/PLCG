#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned long long int var_5 = 12839688904784913666ULL;
unsigned int var_7 = 3081213833U;
short var_11 = (short)14579;
int var_12 = -2033469843;
unsigned short var_14 = (unsigned short)43610;
int zero = 0;
unsigned short var_15 = (unsigned short)34854;
long long int var_16 = -7126220506735430644LL;
unsigned int var_17 = 740521686U;
unsigned char var_18 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
