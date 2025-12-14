#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20687;
unsigned long long int var_1 = 16601006474712023091ULL;
unsigned long long int var_7 = 3609335660364695049ULL;
unsigned char var_10 = (unsigned char)235;
short var_12 = (short)-22182;
unsigned long long int var_13 = 16052184303518013765ULL;
unsigned char var_15 = (unsigned char)119;
unsigned int var_16 = 2761339106U;
int zero = 0;
unsigned long long int var_18 = 4455030217697884214ULL;
short var_19 = (short)4582;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-9399;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
