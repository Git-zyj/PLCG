#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22967;
signed char var_1 = (signed char)2;
long long int var_3 = 5667874570820526219LL;
int var_12 = -847340684;
unsigned long long int var_15 = 15216815383177727618ULL;
int zero = 0;
int var_20 = 1144202629;
signed char var_21 = (signed char)122;
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
