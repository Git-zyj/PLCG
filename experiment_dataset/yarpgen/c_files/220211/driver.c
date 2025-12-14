#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4755582877431337683ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 4105477572U;
short var_11 = (short)-10948;
unsigned long long int var_12 = 15728103377034125923ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
