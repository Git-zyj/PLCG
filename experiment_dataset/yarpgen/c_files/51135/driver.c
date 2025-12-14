#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)5405;
int var_8 = -333087058;
unsigned long long int var_10 = 6085257516953058358ULL;
short var_11 = (short)28911;
short var_13 = (short)-30452;
int zero = 0;
signed char var_15 = (signed char)-56;
unsigned short var_16 = (unsigned short)2738;
int var_17 = 459538899;
int var_18 = -1110232489;
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
