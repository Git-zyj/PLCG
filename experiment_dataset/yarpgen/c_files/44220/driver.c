#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -538838775;
unsigned long long int var_3 = 1625690725563008009ULL;
long long int var_4 = 4425039937856428538LL;
int zero = 0;
unsigned long long int var_10 = 11120554659740721980ULL;
int var_11 = -1988920953;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
