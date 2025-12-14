#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)232;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)111;
int zero = 0;
unsigned long long int var_19 = 16101917386185716302ULL;
unsigned long long int var_20 = 8495602003537614055ULL;
short var_21 = (short)-17500;
unsigned long long int var_22 = 3204057049175692459ULL;
void init() {
}

void checksum() {
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
