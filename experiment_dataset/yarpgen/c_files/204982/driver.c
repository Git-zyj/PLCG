#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1846171989480742987LL;
signed char var_8 = (signed char)101;
unsigned short var_9 = (unsigned short)59963;
unsigned short var_11 = (unsigned short)49080;
unsigned long long int var_13 = 10890643452042938271ULL;
int var_16 = -889287973;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)4905;
void init() {
}

void checksum() {
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
