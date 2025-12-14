#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_5 = (unsigned short)23976;
signed char var_6 = (signed char)-113;
long long int var_9 = 1965074425427152420LL;
signed char var_11 = (signed char)-84;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)183;
int zero = 0;
signed char var_15 = (signed char)61;
unsigned char var_16 = (unsigned char)223;
signed char var_17 = (signed char)99;
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
