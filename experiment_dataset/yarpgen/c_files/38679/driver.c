#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
unsigned long long int var_6 = 17146386787186639671ULL;
short var_11 = (short)-28842;
int var_13 = 1067375575;
int zero = 0;
long long int var_14 = -3872699340658330858LL;
int var_15 = 1607269529;
int var_16 = -177835763;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
