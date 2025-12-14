#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1835269526;
short var_2 = (short)20428;
unsigned int var_3 = 3138236698U;
int var_4 = -557376515;
unsigned int var_6 = 2624816711U;
short var_8 = (short)28546;
_Bool var_12 = (_Bool)1;
long long int var_14 = 8734159494590786270LL;
signed char var_15 = (signed char)41;
int zero = 0;
unsigned short var_16 = (unsigned short)62344;
long long int var_17 = 6942475535527067486LL;
unsigned long long int var_18 = 18225155768545816891ULL;
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
