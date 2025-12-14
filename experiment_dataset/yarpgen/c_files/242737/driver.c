#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7717363336276262439ULL;
unsigned short var_1 = (unsigned short)35611;
unsigned short var_2 = (unsigned short)39460;
unsigned char var_3 = (unsigned char)253;
unsigned char var_4 = (unsigned char)18;
signed char var_5 = (signed char)101;
long long int var_6 = -4940789850340770883LL;
unsigned int var_7 = 114879729U;
signed char var_8 = (signed char)58;
long long int var_9 = 9192772609418862815LL;
long long int var_10 = 57496292665770361LL;
unsigned short var_11 = (unsigned short)12453;
int zero = 0;
unsigned short var_12 = (unsigned short)5628;
int var_13 = -2047203113;
unsigned int var_14 = 1586640432U;
int var_15 = -239480696;
long long int var_16 = 1868581120529855060LL;
unsigned int var_17 = 402721054U;
unsigned long long int var_18 = 1802375300772182161ULL;
int var_19 = -1258601088;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)30;
long long int var_22 = -268948210415050969LL;
unsigned long long int arr_1 [15] ;
long long int arr_3 [15] ;
int arr_8 [25] [25] ;
unsigned short arr_9 [25] ;
short arr_11 [25] ;
unsigned int arr_12 [25] [25] ;
signed char arr_6 [15] [15] ;
short arr_10 [25] [25] ;
unsigned long long int arr_14 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 16226805680304521604ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2431856412183545823LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 831726606;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)25580;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (short)26982;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 3963353611U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)28829 : (short)23733;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 14066887803444457801ULL : 3714296965371579407ULL;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
