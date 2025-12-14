#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22682;
short var_4 = (short)5967;
unsigned long long int var_5 = 12378309539285876367ULL;
unsigned short var_10 = (unsigned short)5269;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_13 = -2268454646594992508LL;
signed char var_14 = (signed char)-60;
short var_15 = (short)26064;
unsigned int var_16 = 3613798477U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
