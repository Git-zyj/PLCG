#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)69;
short var_6 = (short)-4166;
short var_7 = (short)-24925;
unsigned int var_8 = 2267012343U;
signed char var_9 = (signed char)108;
short var_10 = (short)-19606;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)72;
signed char var_13 = (signed char)-84;
unsigned char var_15 = (unsigned char)52;
int zero = 0;
short var_16 = (short)-20165;
_Bool var_17 = (_Bool)1;
long long int var_18 = 7984302163267059578LL;
long long int var_19 = -7607079275786644929LL;
unsigned int var_20 = 2173609592U;
int var_21 = 1029792838;
_Bool var_22 = (_Bool)1;
short var_23 = (short)20920;
short var_24 = (short)16776;
long long int var_25 = -6507695866416927383LL;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2067798811U;
unsigned int var_28 = 3674641766U;
short var_29 = (short)8705;
short var_30 = (short)-29881;
unsigned int var_31 = 2296584447U;
int var_32 = 1763053730;
short arr_0 [13] [13] ;
short arr_2 [13] [13] ;
unsigned int arr_4 [20] ;
int arr_5 [20] [20] ;
unsigned char arr_6 [20] ;
long long int arr_8 [20] [20] ;
short arr_11 [20] ;
short arr_13 [20] [20] [20] [20] [20] ;
int arr_23 [24] ;
signed char arr_24 [24] [24] ;
unsigned int arr_14 [20] [20] [20] [20] ;
signed char arr_21 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-22480;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)18094;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 3483716306U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 527830690;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = -77940541471657019LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)31926 : (short)-27633;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)18984 : (short)-22452;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = -968535245;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3486683140U : 229745731U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (signed char)-73 : (signed char)-100;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
