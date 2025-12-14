#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7164704597679835632LL;
unsigned char var_5 = (unsigned char)209;
int var_6 = 134025494;
unsigned int var_7 = 1712753100U;
unsigned int var_8 = 1285333859U;
unsigned int var_9 = 2790323491U;
int zero = 0;
unsigned short var_14 = (unsigned short)65076;
unsigned int var_15 = 2704131209U;
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
