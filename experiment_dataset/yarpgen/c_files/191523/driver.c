#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10728234216023151322ULL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-26779;
long long int var_8 = -2027000230945459034LL;
unsigned long long int var_9 = 912251711205393558ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_17 = (short)-30923;
unsigned long long int var_18 = 9333026503091519949ULL;
unsigned long long int var_19 = 15024311178467662699ULL;
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
