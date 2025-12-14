#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-61;
short var_4 = (short)13756;
long long int var_5 = -5558022306652806236LL;
_Bool var_8 = (_Bool)1;
unsigned short var_13 = (unsigned short)30467;
int zero = 0;
unsigned int var_15 = 599432016U;
long long int var_16 = 3223654609271812879LL;
long long int var_17 = 7235934644945828691LL;
void init() {
}

void checksum() {
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
