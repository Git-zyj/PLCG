#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7458291573594986014LL;
int var_6 = 960841468;
int var_8 = -1533494621;
int var_9 = 1929304344;
int zero = 0;
unsigned long long int var_11 = 4704343716026992794ULL;
long long int var_12 = 1586226799973702935LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
