#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)67;
_Bool var_6 = (_Bool)0;
int var_7 = 2048336871;
short var_8 = (short)-13279;
int zero = 0;
unsigned long long int var_15 = 5022591654956655740ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)168;
long long int var_18 = 5416671596691262588LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
