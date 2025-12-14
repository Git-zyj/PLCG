#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)17547;
int var_3 = 172900196;
short var_9 = (short)-30451;
unsigned long long int var_10 = 769608302135710705ULL;
short var_15 = (short)-25000;
int zero = 0;
unsigned long long int var_17 = 11483019241158489611ULL;
unsigned int var_18 = 2052172173U;
void init() {
}

void checksum() {
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
