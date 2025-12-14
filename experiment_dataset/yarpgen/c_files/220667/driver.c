#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-41;
unsigned short var_13 = (unsigned short)30083;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 1281204712U;
unsigned short var_18 = (unsigned short)60630;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
