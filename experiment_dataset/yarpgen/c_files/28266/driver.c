#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22762;
unsigned short var_2 = (unsigned short)2090;
unsigned short var_3 = (unsigned short)61668;
short var_4 = (short)29127;
signed char var_7 = (signed char)82;
long long int var_10 = -8544019699311739112LL;
unsigned short var_11 = (unsigned short)36978;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)58024;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)64330;
short var_19 = (short)-11151;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)39354;
signed char var_22 = (signed char)120;
signed char var_23 = (signed char)107;
_Bool var_24 = (_Bool)0;
long long int var_25 = 6242744756871437024LL;
unsigned short var_26 = (unsigned short)51763;
unsigned short arr_1 [12] ;
signed char arr_3 [12] [12] ;
unsigned short arr_5 [24] [24] ;
_Bool arr_4 [12] ;
signed char arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)28034;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)55574;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (signed char)-89;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
