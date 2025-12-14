#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)61334;
int var_14 = -2131670643;
int zero = 0;
unsigned long long int var_16 = 3067942468995445323ULL;
long long int var_17 = 4633661210477639430LL;
unsigned char var_18 = (unsigned char)187;
short var_19 = (short)15027;
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
