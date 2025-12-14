#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13039001879547543380ULL;
unsigned char var_2 = (unsigned char)140;
unsigned int var_5 = 3373308151U;
unsigned char var_7 = (unsigned char)144;
long long int var_8 = -5753066027500956973LL;
short var_11 = (short)14181;
int var_12 = -1497967874;
unsigned int var_13 = 2377083844U;
unsigned char var_14 = (unsigned char)185;
unsigned long long int var_15 = 7941613894680306605ULL;
int var_17 = 1752516755;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 11015744484363861554ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)204;
unsigned char var_22 = (unsigned char)220;
unsigned int var_23 = 2349857202U;
unsigned int var_24 = 4251726072U;
unsigned short var_25 = (unsigned short)27007;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)167;
unsigned int var_28 = 2644546002U;
unsigned short var_29 = (unsigned short)51898;
_Bool arr_0 [15] ;
unsigned char arr_1 [15] ;
long long int arr_2 [15] ;
unsigned char arr_3 [15] ;
long long int arr_4 [15] ;
long long int arr_6 [15] ;
unsigned int arr_7 [15] [15] ;
short arr_17 [19] [19] ;
int arr_18 [19] ;
unsigned char arr_21 [23] ;
long long int arr_23 [23] ;
unsigned char arr_5 [15] ;
long long int arr_13 [15] ;
unsigned int arr_16 [12] ;
unsigned short arr_19 [19] ;
unsigned char arr_24 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -7087611624799679950LL : -6812348361927967175LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)119 : (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2886399315922664769LL : -585867071441985354LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 6975789380380080184LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 1664537917U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-17885;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = -1425165393;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)184 : (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = 759162059158077702LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)105 : (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = -7316122993351030085LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 908633092U : 4027081359U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (unsigned short)47515;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)88 : (unsigned char)11;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
