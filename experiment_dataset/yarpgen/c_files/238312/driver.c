#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)77;
_Bool var_6 = (_Bool)1;
signed char var_10 = (signed char)-116;
unsigned long long int var_11 = 14068596589087417482ULL;
unsigned long long int var_12 = 4320662763413724995ULL;
short var_14 = (short)11494;
unsigned long long int var_15 = 3970318221406034620ULL;
unsigned long long int var_16 = 15267007693069256225ULL;
int zero = 0;
unsigned long long int var_17 = 79031989539372831ULL;
signed char var_18 = (signed char)109;
unsigned int var_19 = 3551828126U;
short var_20 = (short)9950;
unsigned int var_21 = 2014628616U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
