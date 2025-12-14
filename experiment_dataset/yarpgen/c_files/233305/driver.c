#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3065844706720281743ULL;
short var_1 = (short)11956;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-6726;
signed char var_12 = (signed char)-13;
int zero = 0;
int var_16 = -1662889400;
signed char var_17 = (signed char)26;
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
