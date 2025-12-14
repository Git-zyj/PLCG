#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16716056741368612225ULL;
short var_3 = (short)-13894;
short var_5 = (short)-24715;
_Bool var_12 = (_Bool)0;
short var_14 = (short)32579;
unsigned long long int var_15 = 3964349282463104671ULL;
int zero = 0;
long long int var_16 = 6245020886221713802LL;
unsigned long long int var_17 = 12953417387402395240ULL;
short var_18 = (short)-7275;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
