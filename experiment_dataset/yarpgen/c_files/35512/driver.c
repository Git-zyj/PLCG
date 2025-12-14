#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 1877074675;
short var_3 = (short)7838;
short var_4 = (short)-22744;
int var_6 = 668369960;
signed char var_8 = (signed char)-76;
long long int var_9 = 8583624307523245836LL;
unsigned long long int var_10 = 8812116323500221489ULL;
long long int var_11 = 2735081118434444484LL;
unsigned long long int var_14 = 9207020338450507868ULL;
int zero = 0;
short var_16 = (short)-21594;
unsigned char var_17 = (unsigned char)232;
unsigned long long int var_18 = 5271639120633264221ULL;
short var_19 = (short)-19225;
unsigned char var_20 = (unsigned char)38;
unsigned char var_21 = (unsigned char)163;
unsigned long long int var_22 = 6087352537593594696ULL;
unsigned long long int var_23 = 1011802149552804136ULL;
unsigned long long int var_24 = 2136963775791821098ULL;
short var_25 = (short)-18426;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)55697;
unsigned long long int var_28 = 16389243128223101153ULL;
unsigned char var_29 = (unsigned char)49;
short var_30 = (short)14522;
unsigned int var_31 = 339930753U;
unsigned short var_32 = (unsigned short)4281;
unsigned char var_33 = (unsigned char)206;
unsigned int var_34 = 4210031404U;
unsigned short var_35 = (unsigned short)27582;
short var_36 = (short)2467;
unsigned short var_37 = (unsigned short)37113;
_Bool var_38 = (_Bool)0;
short var_39 = (short)-7906;
signed char arr_0 [13] ;
_Bool arr_1 [13] ;
_Bool arr_2 [13] [13] ;
long long int arr_4 [13] [13] [13] ;
_Bool arr_5 [13] [13] [13] ;
unsigned long long int arr_8 [13] ;
unsigned int arr_9 [13] [13] [13] [13] [13] ;
int arr_10 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_19 [13] [13] [13] [13] ;
long long int arr_21 [13] [13] [13] ;
_Bool arr_26 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -587269789193267574LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 18078397057499211743ULL : 11046299266169628516ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 2063690628U : 1012517337U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1517361692;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1682374689069244609ULL : 17876878286000590249ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -8027174388097011746LL : -6382940104096311536LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = (_Bool)1;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
