#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3912207060354017561LL;
short var_1 = (short)16124;
unsigned long long int var_2 = 1314275545974713589ULL;
short var_3 = (short)-24261;
short var_5 = (short)20960;
int var_7 = 823655650;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)39;
unsigned int var_14 = 2097309287U;
int zero = 0;
unsigned int var_16 = 2662764791U;
short var_17 = (short)18145;
_Bool var_18 = (_Bool)1;
short var_19 = (short)14278;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
