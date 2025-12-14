#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)139;
unsigned char var_7 = (unsigned char)180;
unsigned long long int var_18 = 17274229235504713237ULL;
int zero = 0;
int var_20 = 1319318405;
long long int var_21 = 7935868186563988429LL;
void init() {
}

void checksum() {
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
