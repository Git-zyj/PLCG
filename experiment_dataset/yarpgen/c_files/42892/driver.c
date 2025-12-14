#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)49;
unsigned int var_9 = 2506272380U;
unsigned short var_12 = (unsigned short)62114;
int var_15 = -1345703772;
int zero = 0;
int var_16 = -326559967;
unsigned int var_17 = 2077306450U;
signed char var_18 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
