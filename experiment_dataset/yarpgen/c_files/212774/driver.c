#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24057;
signed char var_1 = (signed char)-56;
unsigned long long int var_2 = 12452186873406907022ULL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 3319613046743481166LL;
short var_5 = (short)7798;
long long int var_6 = 8740502851477505821LL;
signed char var_8 = (signed char)71;
int zero = 0;
unsigned char var_12 = (unsigned char)14;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 12560518315180272513ULL;
int var_15 = -718237279;
signed char var_16 = (signed char)-94;
short var_17 = (short)-15143;
long long int var_18 = 8852239984461153904LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-34;
long long int var_21 = 8185116355146732264LL;
unsigned short var_22 = (unsigned short)51942;
int var_23 = -609302112;
unsigned short var_24 = (unsigned short)50215;
signed char var_25 = (signed char)-79;
unsigned char arr_0 [20] ;
unsigned long long int arr_1 [20] ;
short arr_2 [20] ;
unsigned short arr_6 [24] ;
signed char arr_7 [24] [24] ;
unsigned short arr_10 [24] ;
int arr_11 [24] ;
int arr_8 [24] ;
unsigned short arr_9 [24] ;
unsigned char arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 6732831009836262301ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)16481;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)65143;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)55148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 1369388389;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 1712812234;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)12611;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)18 : (unsigned char)24;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
