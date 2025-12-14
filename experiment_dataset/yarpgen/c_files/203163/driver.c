#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2959532086U;
short var_6 = (short)-30172;
signed char var_9 = (signed char)-23;
signed char var_11 = (signed char)-21;
short var_12 = (short)17047;
unsigned long long int var_14 = 4029548227257604319ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 18017863776383361702ULL;
unsigned int var_18 = 4292911958U;
void init() {
}

void checksum() {
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
