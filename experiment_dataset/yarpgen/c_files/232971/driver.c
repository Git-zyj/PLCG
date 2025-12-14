#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11570;
unsigned int var_4 = 3724675047U;
int var_5 = -1773196702;
unsigned short var_6 = (unsigned short)51057;
unsigned long long int var_8 = 13575079352059147418ULL;
unsigned char var_15 = (unsigned char)80;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = -153491456;
short var_18 = (short)28067;
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
