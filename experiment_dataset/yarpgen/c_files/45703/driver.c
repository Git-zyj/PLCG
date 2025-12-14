#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23332;
unsigned short var_1 = (unsigned short)10471;
signed char var_3 = (signed char)51;
unsigned long long int var_6 = 15236312770325225281ULL;
signed char var_7 = (signed char)35;
short var_8 = (short)19363;
int var_11 = 2009504916;
signed char var_13 = (signed char)-14;
_Bool var_15 = (_Bool)0;
int var_16 = -1493190040;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-87;
unsigned int var_19 = 345942166U;
long long int var_20 = 1031075587494132134LL;
unsigned char arr_0 [24] [24] ;
int arr_2 [24] ;
long long int arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 407201864 : -544689597;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -8787271917726787314LL : 4401018092034174324LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
