#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3406300294U;
signed char var_7 = (signed char)-1;
short var_13 = (short)2304;
signed char var_14 = (signed char)-77;
long long int var_15 = -8402657879036503223LL;
unsigned int var_17 = 1614822676U;
int zero = 0;
unsigned long long int var_18 = 12677286892980198511ULL;
unsigned char var_19 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
