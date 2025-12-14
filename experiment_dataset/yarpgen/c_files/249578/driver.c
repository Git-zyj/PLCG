#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5546365051332565676LL;
short var_7 = (short)-10847;
long long int var_9 = -1047218930460439390LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -8453503250007667343LL;
long long int var_12 = 637345279476277811LL;
short var_13 = (short)-3378;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
