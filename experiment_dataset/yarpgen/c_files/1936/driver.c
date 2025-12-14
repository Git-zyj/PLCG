#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_6 = -3056382583155943151LL;
int var_7 = -1577956332;
_Bool var_9 = (_Bool)1;
short var_10 = (short)8582;
int zero = 0;
unsigned long long int var_13 = 14668620764529753171ULL;
unsigned short var_14 = (unsigned short)42114;
unsigned char var_15 = (unsigned char)124;
short var_16 = (short)3664;
int var_17 = -1749196359;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
