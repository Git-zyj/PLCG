#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)3796;
long long int var_2 = -2759558166769794222LL;
unsigned char var_6 = (unsigned char)201;
unsigned long long int var_7 = 9286791262317446840ULL;
long long int var_8 = -2886197611093604493LL;
int var_9 = 1736458958;
unsigned short var_10 = (unsigned short)5820;
int zero = 0;
unsigned short var_13 = (unsigned short)23660;
int var_14 = 794330296;
short var_15 = (short)20225;
unsigned long long int var_16 = 11583909579137657654ULL;
unsigned short var_17 = (unsigned short)29979;
short var_18 = (short)-21211;
unsigned int var_19 = 1593008334U;
signed char var_20 = (signed char)-63;
unsigned int var_21 = 705365355U;
unsigned int var_22 = 922206282U;
unsigned char arr_0 [17] [17] ;
int arr_1 [17] ;
signed char arr_2 [17] ;
unsigned int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -880142842;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1945871577U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
