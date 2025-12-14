#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1471241747U;
unsigned char var_1 = (unsigned char)27;
long long int var_2 = -8947025105606513271LL;
unsigned long long int var_4 = 15680917417972197221ULL;
signed char var_5 = (signed char)-121;
long long int var_8 = 6411505599576721716LL;
unsigned int var_9 = 3979294571U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)30;
int var_16 = -1027669715;
long long int var_17 = -7971587886502260596LL;
int var_18 = -1947319939;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
