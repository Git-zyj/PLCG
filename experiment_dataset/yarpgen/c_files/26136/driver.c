#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 488176820U;
long long int var_3 = -8554091121518245531LL;
long long int var_7 = 6361195962738724502LL;
unsigned long long int var_15 = 12580173544724039494ULL;
short var_17 = (short)29173;
int zero = 0;
unsigned long long int var_19 = 14366945621086082240ULL;
long long int var_20 = -5906298342343409728LL;
unsigned int var_21 = 2923396794U;
void init() {
}

void checksum() {
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
