#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4282989027U;
int var_4 = -741276981;
_Bool var_6 = (_Bool)0;
int var_10 = -270423489;
unsigned int var_11 = 1658312342U;
long long int var_12 = -8971250632704038261LL;
int zero = 0;
signed char var_16 = (signed char)-21;
short var_17 = (short)-22104;
long long int var_18 = 5462000975024550694LL;
unsigned int var_19 = 3558230458U;
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
