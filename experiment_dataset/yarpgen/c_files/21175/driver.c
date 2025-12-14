#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_9 = 8810276370200108296ULL;
unsigned long long int var_16 = 7536187748057793563ULL;
long long int var_17 = 5139333268142359310LL;
int zero = 0;
long long int var_18 = -8760615356222259829LL;
int var_19 = -1656975734;
long long int var_20 = -3450723216179121685LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
