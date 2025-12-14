#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6482;
short var_3 = (short)21044;
short var_4 = (short)-18657;
short var_10 = (short)-1195;
_Bool var_12 = (_Bool)0;
unsigned long long int var_16 = 11528122046185382384ULL;
int var_17 = 1580220548;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-30736;
signed char var_21 = (signed char)47;
void init() {
}

void checksum() {
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
