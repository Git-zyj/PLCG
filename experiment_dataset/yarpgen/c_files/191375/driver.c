#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 199410485040525366ULL;
unsigned long long int var_6 = 18068984601276120643ULL;
int var_9 = 216957109;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 6845144015303216610ULL;
int zero = 0;
short var_19 = (short)21805;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
