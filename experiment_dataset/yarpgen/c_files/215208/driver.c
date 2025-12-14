#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3618053269U;
short var_9 = (short)31431;
unsigned int var_14 = 3012715469U;
unsigned int var_18 = 1568607813U;
int zero = 0;
unsigned char var_19 = (unsigned char)175;
unsigned long long int var_20 = 1127097712064718097ULL;
unsigned long long int var_21 = 5743459200107076797ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
