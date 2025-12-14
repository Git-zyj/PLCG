#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 16786824918848770466ULL;
unsigned long long int var_14 = 16955800121374139852ULL;
unsigned short var_16 = (unsigned short)45247;
signed char var_17 = (signed char)-102;
int zero = 0;
unsigned long long int var_20 = 1772840037642465304ULL;
unsigned short var_21 = (unsigned short)13634;
short var_22 = (short)1072;
void init() {
}

void checksum() {
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
