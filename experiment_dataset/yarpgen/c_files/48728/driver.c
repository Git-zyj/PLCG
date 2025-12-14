#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9907477793472842073ULL;
short var_1 = (short)20537;
long long int var_2 = 1400763599136600463LL;
unsigned long long int var_6 = 8227930611089523191ULL;
unsigned long long int var_7 = 8056548828534208296ULL;
signed char var_8 = (signed char)54;
unsigned int var_9 = 902245321U;
unsigned int var_10 = 710838799U;
int zero = 0;
signed char var_14 = (signed char)-95;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
