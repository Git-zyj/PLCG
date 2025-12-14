#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 4131284468608165859LL;
unsigned long long int var_14 = 13666910510514620033ULL;
int zero = 0;
unsigned long long int var_17 = 8472719710701707119ULL;
unsigned long long int var_18 = 17026512659170286565ULL;
int var_19 = 1332021947;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
