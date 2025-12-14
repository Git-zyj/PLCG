#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 2140562861999490509ULL;
unsigned char var_6 = (unsigned char)139;
unsigned int var_7 = 559355038U;
long long int var_9 = -5449517773956795887LL;
unsigned int var_11 = 680807466U;
unsigned int var_12 = 1440664459U;
long long int var_16 = -3593463777511121176LL;
int zero = 0;
unsigned char var_17 = (unsigned char)222;
unsigned char var_18 = (unsigned char)109;
unsigned long long int var_19 = 9726616612370276929ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
