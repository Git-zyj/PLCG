#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2281147236434014854LL;
int var_8 = -880364904;
int var_9 = 1586683870;
int zero = 0;
unsigned int var_16 = 1026153462U;
unsigned int var_17 = 2881758726U;
unsigned int var_18 = 2414709869U;
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
