#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_10 = -6058601626179458762LL;
short var_11 = (short)3538;
unsigned long long int var_12 = 14046194452913799623ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_15 = (short)-21377;
signed char var_16 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
