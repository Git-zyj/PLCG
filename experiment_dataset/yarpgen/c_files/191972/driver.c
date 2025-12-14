#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3393074149U;
long long int var_11 = -6179764819955069789LL;
unsigned char var_13 = (unsigned char)53;
signed char var_15 = (signed char)62;
int zero = 0;
int var_17 = -834328990;
short var_18 = (short)-3545;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 14183510058846901318ULL;
short var_21 = (short)30329;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
