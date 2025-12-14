#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)47;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3398416602U;
short var_6 = (short)19244;
long long int var_7 = 4862100401795638153LL;
unsigned int var_9 = 1369168411U;
long long int var_10 = 351111644635651053LL;
unsigned int var_11 = 544383127U;
unsigned short var_12 = (unsigned short)6505;
long long int var_13 = 3867939148129685891LL;
unsigned char var_14 = (unsigned char)31;
int zero = 0;
long long int var_15 = 4005876484007530262LL;
int var_16 = 1275945779;
_Bool var_17 = (_Bool)1;
long long int var_18 = 4190515080240325274LL;
int var_19 = 20970593;
long long int var_20 = 6364619753720671890LL;
unsigned long long int var_21 = 1775504213463001573ULL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-60;
unsigned long long int var_25 = 14911117464167584519ULL;
unsigned long long int var_26 = 3105660347089910124ULL;
_Bool arr_0 [11] ;
short arr_1 [11] [11] ;
int arr_5 [11] ;
unsigned char arr_12 [11] [11] [11] [11] [11] [11] [11] ;
int arr_14 [12] [12] ;
_Bool arr_15 [12] ;
int arr_6 [11] [11] ;
unsigned long long int arr_13 [11] [11] ;
unsigned char arr_16 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-30176;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -61123776;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = -1852316340;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -1436639950 : 405507477;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 6701458274991774097ULL : 860951114314557656ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned char)166;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
