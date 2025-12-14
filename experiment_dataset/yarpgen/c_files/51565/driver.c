#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27574;
unsigned short var_2 = (unsigned short)16679;
signed char var_4 = (signed char)96;
unsigned long long int var_5 = 15721969820289067792ULL;
long long int var_8 = 5572700706221610595LL;
unsigned long long int var_9 = 14646813895315938153ULL;
signed char var_10 = (signed char)-77;
unsigned int var_11 = 2775991928U;
unsigned int var_13 = 2144215301U;
signed char var_14 = (signed char)67;
int zero = 0;
unsigned short var_15 = (unsigned short)1769;
unsigned short var_16 = (unsigned short)5916;
short var_17 = (short)-20619;
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
