#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-154;
unsigned long long int var_3 = 6191150849077167421ULL;
unsigned long long int var_5 = 6717414239427830134ULL;
unsigned char var_9 = (unsigned char)19;
short var_10 = (short)-7058;
long long int var_11 = 507281640823540503LL;
unsigned char var_12 = (unsigned char)207;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)123;
unsigned long long int var_18 = 11070121627388078501ULL;
short var_19 = (short)-16608;
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
