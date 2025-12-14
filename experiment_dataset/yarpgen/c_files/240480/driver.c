#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7244;
short var_1 = (short)21249;
signed char var_6 = (signed char)86;
signed char var_9 = (signed char)-65;
unsigned long long int var_11 = 5323827486449057581ULL;
unsigned short var_12 = (unsigned short)61658;
int zero = 0;
int var_13 = -1037713328;
unsigned long long int var_14 = 12567962385112250999ULL;
int var_15 = 761270096;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
