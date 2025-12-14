#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6315787533371502508LL;
long long int var_7 = -1109626335104375541LL;
short var_8 = (short)15365;
long long int var_9 = 3672697915701174617LL;
int var_16 = -823171207;
int zero = 0;
short var_17 = (short)21243;
unsigned short var_18 = (unsigned short)29701;
long long int var_19 = 6754088921026818256LL;
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
