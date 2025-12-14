#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1615906775U;
unsigned long long int var_3 = 16384327147729076921ULL;
unsigned int var_4 = 2261528271U;
short var_6 = (short)7736;
unsigned int var_7 = 1099256218U;
short var_11 = (short)-14114;
long long int var_12 = -1836102445015199392LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
