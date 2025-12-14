#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
short var_1 = (short)23258;
_Bool var_9 = (_Bool)1;
long long int var_11 = -8733776979988381161LL;
unsigned long long int var_13 = 15523746458896186175ULL;
short var_16 = (short)-6371;
int zero = 0;
short var_17 = (short)4351;
_Bool var_18 = (_Bool)1;
int var_19 = -656994129;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
