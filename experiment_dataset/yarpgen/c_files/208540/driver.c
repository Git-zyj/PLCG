#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1742546298U;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-23904;
short var_7 = (short)27628;
unsigned short var_9 = (unsigned short)3476;
unsigned long long int var_11 = 2209700025294488306ULL;
_Bool var_16 = (_Bool)1;
short var_18 = (short)-23804;
int zero = 0;
signed char var_20 = (signed char)-80;
short var_21 = (short)-22123;
unsigned long long int var_22 = 8076962892541617949ULL;
int var_23 = 1593032826;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
