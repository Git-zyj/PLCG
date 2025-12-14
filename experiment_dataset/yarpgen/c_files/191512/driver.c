#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1167170242U;
int var_5 = 1724649980;
unsigned long long int var_6 = 13940685124136448298ULL;
int var_7 = 17595921;
long long int var_9 = -8259719520541405236LL;
unsigned long long int var_10 = 11256196064875806662ULL;
long long int var_13 = 408701374306689069LL;
unsigned long long int var_16 = 12191414702008856649ULL;
int var_17 = 445171487;
int zero = 0;
unsigned long long int var_18 = 17609080845736164501ULL;
unsigned long long int var_19 = 4994814252039966460ULL;
int var_20 = -519190510;
int var_21 = -597611115;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
