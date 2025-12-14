#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)77;
long long int var_4 = -5732994005555085871LL;
unsigned int var_8 = 1418825431U;
int var_9 = -1145132448;
unsigned int var_10 = 2358027181U;
int zero = 0;
short var_14 = (short)-31340;
long long int var_15 = 3204373711720601062LL;
unsigned char var_16 = (unsigned char)125;
unsigned long long int var_17 = 2107625535347175499ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
