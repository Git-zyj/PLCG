#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8240065280570389836LL;
long long int var_2 = 3379251970242547879LL;
unsigned short var_3 = (unsigned short)57262;
int var_4 = 943664647;
_Bool var_5 = (_Bool)0;
int var_9 = 1656770340;
unsigned int var_11 = 2537937354U;
long long int var_12 = -1620308049933090324LL;
long long int var_13 = 681288805879817801LL;
int var_15 = -1771759651;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)113;
_Bool var_19 = (_Bool)1;
int var_20 = -1415900193;
unsigned short var_21 = (unsigned short)64319;
short var_22 = (short)-9345;
int var_23 = -900553332;
_Bool var_24 = (_Bool)1;
long long int var_25 = -5518634172372816005LL;
signed char arr_1 [14] ;
long long int arr_2 [14] ;
unsigned long long int arr_3 [14] [14] ;
int arr_4 [14] ;
signed char arr_9 [23] ;
_Bool arr_10 [23] ;
unsigned char arr_6 [14] ;
unsigned short arr_7 [14] [14] ;
short arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -5575352776670452517LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 17758392481099892273ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -7366998 : -1118464941;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)229 : (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)25323 : (unsigned short)14674;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-2130 : (short)1228;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
