#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33805;
unsigned long long int var_6 = 823015642483811799ULL;
signed char var_7 = (signed char)-88;
signed char var_9 = (signed char)-117;
unsigned long long int var_12 = 8535704261872747836ULL;
unsigned short var_15 = (unsigned short)8016;
int zero = 0;
signed char var_16 = (signed char)-67;
long long int var_17 = 6978849065566329450LL;
unsigned long long int var_18 = 7919082387161626237ULL;
void init() {
}

void checksum() {
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
