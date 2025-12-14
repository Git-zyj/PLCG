#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1319783431;
long long int var_3 = 442923539002848595LL;
unsigned char var_4 = (unsigned char)123;
long long int var_8 = 565119690629228813LL;
int var_10 = 1568277116;
unsigned short var_15 = (unsigned short)41527;
unsigned short var_17 = (unsigned short)14548;
int zero = 0;
long long int var_19 = -3210615413407099205LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
