#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 828015316U;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)4496;
unsigned long long int var_10 = 975449042781523926ULL;
int zero = 0;
signed char var_14 = (signed char)-79;
long long int var_15 = -95886887767390281LL;
signed char var_16 = (signed char)-89;
long long int var_17 = 8924600965900335110LL;
signed char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)119;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
