#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3452940678457751641LL;
unsigned short var_1 = (unsigned short)42942;
int var_3 = -665591927;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3060177908U;
unsigned long long int var_6 = 308699313262486478ULL;
unsigned short var_7 = (unsigned short)1648;
unsigned long long int var_10 = 17181020247762040364ULL;
long long int var_12 = -975025268881035462LL;
short var_14 = (short)15089;
short var_15 = (short)1932;
short var_17 = (short)-30308;
int zero = 0;
unsigned char var_18 = (unsigned char)56;
signed char var_19 = (signed char)-55;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-6956;
unsigned char var_22 = (unsigned char)176;
unsigned int var_23 = 2049213409U;
_Bool arr_0 [13] ;
_Bool arr_1 [13] ;
unsigned int arr_2 [13] ;
unsigned char arr_3 [13] [13] ;
long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3564192669U : 409244821U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)178 : (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -3981873075985243466LL : 8629893502683178761LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
