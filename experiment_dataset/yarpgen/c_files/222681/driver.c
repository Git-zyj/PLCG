#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12217;
unsigned long long int var_2 = 1063543094367607691ULL;
unsigned int var_9 = 639526814U;
signed char var_10 = (signed char)-6;
unsigned short var_14 = (unsigned short)64734;
int zero = 0;
unsigned int var_15 = 4035324900U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
