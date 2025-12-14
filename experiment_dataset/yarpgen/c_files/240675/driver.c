#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3743;
unsigned int var_4 = 1138950386U;
int var_5 = 404908806;
unsigned int var_8 = 2643510241U;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)3970;
short var_16 = (short)17634;
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
