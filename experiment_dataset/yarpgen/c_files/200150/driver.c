#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 690687818U;
long long int var_6 = 3996873142784302889LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-18517;
int zero = 0;
short var_10 = (short)11578;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 13098190466661487541ULL;
long long int var_13 = 6795988903202634897LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
