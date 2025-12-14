#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3093466295U;
unsigned long long int var_3 = 15256213227432518846ULL;
unsigned long long int var_4 = 5081839177858676557ULL;
unsigned int var_6 = 579725121U;
unsigned long long int var_9 = 14962694713598182916ULL;
long long int var_12 = 1468152438662559417LL;
int zero = 0;
long long int var_16 = -4480477455469979269LL;
short var_17 = (short)20508;
unsigned long long int var_18 = 18434785876480030709ULL;
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
