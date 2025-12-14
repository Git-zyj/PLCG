#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5445853560395583510LL;
unsigned short var_3 = (unsigned short)58472;
unsigned short var_8 = (unsigned short)48992;
int zero = 0;
long long int var_10 = 3157192248767937563LL;
unsigned int var_11 = 2499154078U;
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
