#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-38;
unsigned int var_4 = 1065206769U;
signed char var_6 = (signed char)126;
signed char var_7 = (signed char)-114;
signed char var_10 = (signed char)6;
unsigned long long int var_11 = 5352863952626924666ULL;
long long int var_13 = -2005803181906601439LL;
int zero = 0;
long long int var_15 = 4865515334676890335LL;
int var_16 = -174089448;
int var_17 = -1401464111;
void init() {
}

void checksum() {
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
