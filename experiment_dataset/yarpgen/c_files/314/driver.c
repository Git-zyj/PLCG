#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1428670526U;
unsigned int var_4 = 4129932911U;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-5524;
short var_7 = (short)-22752;
unsigned int var_8 = 2914641787U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 881564320U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)11318;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)214;
signed char var_16 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
