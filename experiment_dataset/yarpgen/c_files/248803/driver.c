#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_4 = 805316226U;
_Bool var_5 = (_Bool)0;
long long int var_6 = -2664070267489296849LL;
signed char var_7 = (signed char)-126;
long long int var_8 = -4508247736532987814LL;
unsigned long long int var_9 = 7537324117600706902ULL;
unsigned int var_10 = 3777301285U;
short var_11 = (short)-28323;
int zero = 0;
short var_12 = (short)-20753;
int var_13 = -989274013;
unsigned char var_14 = (unsigned char)95;
signed char var_15 = (signed char)116;
short arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)7048;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
