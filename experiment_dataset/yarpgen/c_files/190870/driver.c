#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4585;
long long int var_3 = 4839919997165253086LL;
unsigned long long int var_4 = 1042872672239990060ULL;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-60;
signed char var_14 = (signed char)47;
int var_15 = 1947415215;
unsigned long long int var_17 = 13586042294863854165ULL;
int zero = 0;
long long int var_18 = 6676215336410205484LL;
unsigned int var_19 = 679625842U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
