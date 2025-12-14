#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)205;
unsigned int var_10 = 2530829323U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8265316890038113878LL;
short var_16 = (short)-22204;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4249838853U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
