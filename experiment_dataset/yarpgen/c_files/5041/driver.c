#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8028582099481431220LL;
unsigned int var_5 = 872551443U;
signed char var_10 = (signed char)17;
int var_15 = -274618390;
int zero = 0;
unsigned long long int var_17 = 13345420108174041740ULL;
unsigned int var_18 = 1402390376U;
unsigned long long int var_19 = 15091218766793417861ULL;
long long int var_20 = 260074454498004851LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
