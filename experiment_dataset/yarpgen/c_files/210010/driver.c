#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7399387365207879649LL;
long long int var_6 = 7909361931380887882LL;
long long int var_9 = -1793489407786213315LL;
long long int var_13 = 1615501656743951679LL;
unsigned char var_16 = (unsigned char)111;
long long int var_18 = -8311491251545479835LL;
int zero = 0;
long long int var_20 = -9080388341695975334LL;
unsigned char var_21 = (unsigned char)236;
void init() {
}

void checksum() {
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
