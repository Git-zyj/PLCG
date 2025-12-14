#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1322210132;
signed char var_2 = (signed char)38;
unsigned int var_3 = 722180029U;
short var_4 = (short)2436;
unsigned int var_5 = 575137796U;
signed char var_6 = (signed char)55;
unsigned int var_8 = 198630152U;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)14;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 3675955356155509871ULL;
int var_17 = 327124988;
void init() {
}

void checksum() {
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
