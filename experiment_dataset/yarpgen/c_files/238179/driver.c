#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5261;
_Bool var_3 = (_Bool)0;
short var_5 = (short)22502;
unsigned int var_6 = 3753745000U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-3;
unsigned int var_10 = 2922696001U;
unsigned long long int var_11 = 14126766064121531210ULL;
short var_12 = (short)-9837;
unsigned int var_13 = 571826355U;
int zero = 0;
short var_14 = (short)20176;
signed char var_15 = (signed char)-30;
unsigned int var_16 = 3622960724U;
unsigned short arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)41512;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
