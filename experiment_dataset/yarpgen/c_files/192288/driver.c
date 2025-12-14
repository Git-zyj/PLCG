#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2411864646255554168LL;
unsigned long long int var_6 = 17063132191930578018ULL;
long long int var_11 = -5843955316426175220LL;
int zero = 0;
signed char var_12 = (signed char)-126;
long long int var_13 = 8717213472961680045LL;
long long int var_14 = 224438624893340752LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
