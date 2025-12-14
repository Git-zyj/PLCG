#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1626201210;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-81;
_Bool var_6 = (_Bool)0;
int var_7 = 758239486;
signed char var_8 = (signed char)80;
unsigned int var_9 = 2909263935U;
unsigned char var_10 = (unsigned char)176;
unsigned short var_11 = (unsigned short)5865;
long long int var_12 = -8304604789764661846LL;
int zero = 0;
unsigned char var_13 = (unsigned char)25;
long long int var_14 = 6386918565408150239LL;
int var_15 = 1855442207;
long long int var_16 = 9004355895182066778LL;
unsigned char var_17 = (unsigned char)184;
unsigned int var_18 = 3590801234U;
signed char var_19 = (signed char)-40;
int var_20 = 1243825875;
unsigned char var_21 = (unsigned char)174;
int var_22 = 1752924439;
long long int var_23 = -455024226757420437LL;
unsigned int var_24 = 2070956577U;
unsigned short var_25 = (unsigned short)39960;
unsigned char arr_0 [18] [18] ;
signed char arr_1 [18] ;
unsigned char arr_3 [18] [18] ;
_Bool arr_4 [18] ;
unsigned long long int arr_5 [18] [18] ;
unsigned int arr_7 [18] [18] ;
int arr_11 [22] ;
short arr_12 [22] ;
signed char arr_10 [18] [18] ;
int arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 14133591896650854808ULL : 10986593165811193882ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 1168168013U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -614240899 : 1771662341;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)5305 : (short)-16499;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)88 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -165545444 : 142945110;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
