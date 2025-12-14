#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5797;
int var_5 = -1954859039;
unsigned int var_8 = 1779536922U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 15161830375648535124ULL;
unsigned int var_13 = 2802135968U;
int zero = 0;
unsigned long long int var_18 = 3877580376059061365ULL;
unsigned long long int var_19 = 5126823187219485460ULL;
unsigned int var_20 = 1264739639U;
short var_21 = (short)-19086;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
long long int var_25 = 920886734131290482LL;
unsigned short var_26 = (unsigned short)9834;
unsigned long long int arr_4 [12] [12] ;
unsigned long long int arr_7 [23] ;
short arr_8 [23] ;
unsigned int arr_9 [23] [23] ;
short arr_10 [23] [23] ;
unsigned long long int arr_6 [12] ;
_Bool arr_11 [23] [23] ;
unsigned int arr_12 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 13975629055130123730ULL : 16135070393480746246ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 8266367232414532051ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)-17642;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 2631887183U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (short)5929;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 12728616380434922868ULL : 7790208914866982187ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = 2855876475U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
