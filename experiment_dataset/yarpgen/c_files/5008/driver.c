#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3503567769U;
short var_1 = (short)-27419;
unsigned long long int var_2 = 2621747041643873403ULL;
long long int var_5 = -5341318018136186476LL;
short var_6 = (short)-13901;
unsigned long long int var_7 = 13282505860049220970ULL;
unsigned int var_9 = 3303338155U;
unsigned int var_11 = 2495686535U;
int zero = 0;
signed char var_12 = (signed char)83;
int var_13 = -1107607167;
short var_14 = (short)-23788;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)60669;
short var_17 = (short)-30609;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
