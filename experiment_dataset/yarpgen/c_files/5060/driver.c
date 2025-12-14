#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-30767;
long long int var_7 = -2545986437360041868LL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 4035880679U;
unsigned int var_12 = 2533927488U;
signed char var_13 = (signed char)88;
unsigned int var_16 = 314567908U;
int zero = 0;
unsigned char var_17 = (unsigned char)226;
short var_18 = (short)27099;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1305143667U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
