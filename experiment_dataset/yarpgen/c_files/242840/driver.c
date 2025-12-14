#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 8974802993998040561ULL;
long long int var_14 = 642807220024530450LL;
short var_16 = (short)2538;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 5080938509475888880LL;
short var_20 = (short)-28924;
int var_21 = 1555560973;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
