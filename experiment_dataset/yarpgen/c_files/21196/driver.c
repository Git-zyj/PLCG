#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-113;
long long int var_9 = -908680171268302220LL;
unsigned short var_11 = (unsigned short)14243;
int zero = 0;
unsigned short var_16 = (unsigned short)34137;
unsigned long long int var_17 = 17012391626636980618ULL;
void init() {
}

void checksum() {
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
