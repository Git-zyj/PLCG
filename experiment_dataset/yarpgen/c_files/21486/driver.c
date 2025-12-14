#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2179905897U;
unsigned short var_3 = (unsigned short)8696;
long long int var_5 = 5405691081817390832LL;
int var_6 = -1457182976;
long long int var_7 = 2173522845294642211LL;
unsigned long long int var_8 = 14935381368857115675ULL;
unsigned int var_11 = 4287954524U;
unsigned char var_12 = (unsigned char)83;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8667763495935730086LL;
int var_22 = -126021919;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
