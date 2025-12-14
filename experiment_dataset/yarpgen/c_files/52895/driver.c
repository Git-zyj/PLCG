#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3891877390U;
unsigned int var_4 = 2375705812U;
unsigned int var_5 = 2748810279U;
int var_6 = -31582698;
int zero = 0;
int var_14 = -182491147;
unsigned long long int var_15 = 2249435965142459272ULL;
unsigned char var_16 = (unsigned char)106;
int var_17 = -549419729;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
