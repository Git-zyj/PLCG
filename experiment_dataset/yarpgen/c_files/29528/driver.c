#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -785437290;
short var_2 = (short)463;
long long int var_8 = 4583426257858028676LL;
int zero = 0;
int var_14 = 442339672;
long long int var_15 = -2089807639774923926LL;
long long int var_16 = 6017438813211052088LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
