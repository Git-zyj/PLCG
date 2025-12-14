#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1145942672;
unsigned int var_7 = 3466535117U;
unsigned int var_10 = 4282203019U;
signed char var_11 = (signed char)-1;
unsigned int var_13 = 4290275669U;
int zero = 0;
unsigned char var_17 = (unsigned char)249;
unsigned int var_18 = 2200289928U;
long long int var_19 = -3878035807445746218LL;
_Bool var_20 = (_Bool)0;
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
