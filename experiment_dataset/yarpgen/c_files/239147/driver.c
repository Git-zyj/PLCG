#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3355852120924333466LL;
long long int var_2 = -613978850853186391LL;
long long int var_5 = 9057263904820348561LL;
unsigned short var_6 = (unsigned short)2927;
long long int var_7 = -4809670885561728646LL;
int zero = 0;
unsigned long long int var_12 = 11682675826264915891ULL;
long long int var_13 = -5376719883113923658LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
