#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2223676814U;
long long int var_1 = -2145173769376821400LL;
short var_2 = (short)-32359;
signed char var_5 = (signed char)17;
unsigned int var_9 = 3593727542U;
int var_10 = 416666197;
int zero = 0;
unsigned long long int var_14 = 4721040340869154577ULL;
unsigned long long int var_15 = 7384853648340539084ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
