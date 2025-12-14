#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)12814;
short var_5 = (short)-29668;
int var_6 = 637649735;
short var_7 = (short)-6978;
int zero = 0;
long long int var_10 = 8863197468204970933LL;
signed char var_11 = (signed char)-114;
unsigned int var_12 = 2935891110U;
signed char var_13 = (signed char)-40;
unsigned short var_14 = (unsigned short)17254;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
