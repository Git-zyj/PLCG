#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15166951808571315186ULL;
unsigned int var_4 = 533879280U;
long long int var_6 = 7434875824986623240LL;
int zero = 0;
short var_10 = (short)-16922;
short var_11 = (short)31315;
short var_12 = (short)8992;
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
