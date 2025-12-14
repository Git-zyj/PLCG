#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -8455531213048629911LL;
signed char var_2 = (signed char)61;
unsigned long long int var_3 = 11408832411040598126ULL;
unsigned int var_4 = 1614240345U;
int var_7 = 348040605;
unsigned short var_11 = (unsigned short)2222;
signed char var_12 = (signed char)-5;
long long int var_13 = -3665180333437061704LL;
unsigned long long int var_15 = 6369231384920659157ULL;
int zero = 0;
unsigned long long int var_18 = 14061639414508109529ULL;
unsigned int var_19 = 3795914080U;
unsigned short var_20 = (unsigned short)34129;
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
