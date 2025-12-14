#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2032825886;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 4596313294037813105ULL;
unsigned int var_6 = 4283551415U;
unsigned long long int var_8 = 17553238735671648244ULL;
unsigned short var_9 = (unsigned short)34207;
unsigned char var_13 = (unsigned char)239;
int var_16 = -1935135318;
unsigned long long int var_18 = 8587500531901515606ULL;
int zero = 0;
signed char var_20 = (signed char)-18;
signed char var_21 = (signed char)-79;
unsigned short var_22 = (unsigned short)13531;
unsigned short var_23 = (unsigned short)13896;
long long int var_24 = 6489349132123179326LL;
long long int var_25 = -2664931886182442577LL;
short var_26 = (short)-5641;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 3862637132049100982ULL;
int var_29 = -1891125808;
unsigned int var_30 = 721447647U;
short var_31 = (short)-18784;
_Bool var_32 = (_Bool)0;
signed char var_33 = (signed char)117;
long long int var_34 = -313972490684177214LL;
unsigned long long int var_35 = 6731263441225751493ULL;
unsigned long long int var_36 = 6443863493218019688ULL;
signed char var_37 = (signed char)-11;
short var_38 = (short)-16402;
signed char var_39 = (signed char)66;
unsigned short var_40 = (unsigned short)36722;
unsigned int arr_0 [24] [24] ;
int arr_1 [24] ;
unsigned int arr_2 [24] [24] ;
int arr_4 [24] [24] ;
short arr_5 [24] ;
signed char arr_7 [24] [24] [24] ;
_Bool arr_9 [24] ;
long long int arr_14 [24] [24] [24] ;
signed char arr_19 [14] [14] [14] ;
signed char arr_20 [14] [14] [14] ;
short arr_24 [14] [14] ;
unsigned int arr_16 [24] [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 3913686509U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1116830544;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2702295419U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -1093666829;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-2824 : (short)2291;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)2 : (signed char)-92;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -8251886182489283203LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-6426 : (short)-13638;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 1265376761U : 676662825U;
}

void checksum() {
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
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
