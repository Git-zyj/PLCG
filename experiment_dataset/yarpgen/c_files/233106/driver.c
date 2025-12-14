#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -6487051310597933691LL;
unsigned long long int var_9 = 9262470938564153562ULL;
signed char var_14 = (signed char)3;
unsigned long long int var_15 = 7557601708715527460ULL;
int zero = 0;
unsigned int var_19 = 1113034609U;
unsigned short var_20 = (unsigned short)57796;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
