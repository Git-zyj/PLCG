#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 2479463036252596842ULL;
_Bool var_7 = (_Bool)1;
short var_16 = (short)24245;
int zero = 0;
unsigned long long int var_17 = 13571412996759756943ULL;
long long int var_18 = -5867331226495722271LL;
unsigned short var_19 = (unsigned short)61597;
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
