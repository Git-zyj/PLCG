#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1772116727519259346LL;
unsigned int var_7 = 244673113U;
unsigned int var_9 = 1477167370U;
unsigned short var_11 = (unsigned short)39297;
int zero = 0;
unsigned short var_13 = (unsigned short)10609;
int var_14 = 894490147;
unsigned int var_15 = 1706278942U;
long long int var_16 = -3464726539659088683LL;
unsigned int var_17 = 2120953557U;
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
