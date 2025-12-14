#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3142974835U;
unsigned char var_2 = (unsigned char)42;
long long int var_3 = 744543573449416100LL;
unsigned short var_5 = (unsigned short)17809;
unsigned short var_8 = (unsigned short)59068;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)71;
unsigned char var_13 = (unsigned char)126;
signed char var_14 = (signed char)40;
unsigned short var_15 = (unsigned short)37355;
short var_17 = (short)16219;
int zero = 0;
long long int var_18 = 2165769535442649673LL;
signed char var_19 = (signed char)-127;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)1319;
long long int var_24 = -8500786131645013573LL;
short var_25 = (short)-6556;
long long int var_26 = 241027745433680139LL;
unsigned short var_27 = (unsigned short)3887;
long long int var_28 = 5093771455328840230LL;
unsigned short var_29 = (unsigned short)62071;
long long int var_30 = -6351702313729260789LL;
unsigned short arr_0 [12] ;
_Bool arr_1 [12] [12] ;
unsigned int arr_2 [12] ;
unsigned long long int arr_3 [18] ;
unsigned short arr_4 [18] ;
unsigned short arr_5 [18] [18] ;
_Bool arr_6 [18] ;
_Bool arr_8 [24] [24] ;
short arr_9 [24] ;
short arr_10 [18] [18] ;
unsigned int arr_11 [18] ;
unsigned char arr_12 [18] ;
unsigned short arr_15 [18] [18] ;
short arr_16 [18] ;
_Bool arr_19 [18] [18] [18] ;
long long int arr_7 [18] ;
unsigned int arr_14 [18] ;
_Bool arr_17 [18] [18] ;
long long int arr_20 [18] [18] ;
unsigned short arr_21 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)47906;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2272422106U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 15967170109033793944ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)28771;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)9632 : (unsigned short)15556;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)-23196;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-2829;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 558965985U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)6595;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (short)-29614;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -9129336990162087689LL : -3320443573746395291LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 4227668385U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = 6863097224708213941LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (unsigned short)6644;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
