#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
unsigned short var_2 = (unsigned short)15472;
unsigned short var_3 = (unsigned short)15130;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 3152738129515080198ULL;
signed char var_14 = (signed char)-57;
signed char var_15 = (signed char)55;
int zero = 0;
unsigned int var_16 = 1251673503U;
unsigned short var_17 = (unsigned short)6675;
unsigned long long int var_18 = 13498266278346534832ULL;
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
