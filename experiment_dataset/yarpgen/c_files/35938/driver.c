#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1501850451710522881LL;
signed char var_3 = (signed char)-125;
int var_4 = 1080082789;
long long int var_6 = -149682274621520902LL;
long long int var_8 = -3717845937211776249LL;
signed char var_11 = (signed char)111;
signed char var_12 = (signed char)-22;
int zero = 0;
signed char var_15 = (signed char)8;
int var_16 = 1045927005;
void init() {
}

void checksum() {
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
