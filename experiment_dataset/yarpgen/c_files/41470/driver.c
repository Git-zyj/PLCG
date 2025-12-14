#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2032828310U;
signed char var_3 = (signed char)53;
signed char var_5 = (signed char)52;
long long int var_6 = -7510204822957975333LL;
short var_7 = (short)-12213;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-1267;
signed char var_11 = (signed char)107;
long long int var_12 = 608669371504502716LL;
unsigned long long int var_14 = 2609699934682803496ULL;
int zero = 0;
signed char var_15 = (signed char)59;
long long int var_16 = 7989793282994806366LL;
short var_17 = (short)20451;
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
