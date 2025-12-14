#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11839;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)0;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 15893285105819628516ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)88;
short var_17 = (short)18826;
unsigned long long int var_18 = 7776342365976297707ULL;
signed char var_19 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
