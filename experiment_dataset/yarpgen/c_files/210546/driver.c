#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1511565380;
short var_4 = (short)8276;
unsigned int var_9 = 940306841U;
long long int var_11 = -8977886943159467943LL;
unsigned int var_12 = 165305730U;
int zero = 0;
unsigned char var_16 = (unsigned char)252;
int var_17 = 1702111346;
unsigned int var_18 = 3439837439U;
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
