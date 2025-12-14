#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
long long int var_1 = -4095500734724699873LL;
long long int var_2 = -4962849633317083886LL;
unsigned long long int var_3 = 1500496476955819541ULL;
short var_4 = (short)3128;
signed char var_5 = (signed char)-43;
int var_6 = 653496026;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 499306391U;
int var_10 = -411319386;
int var_11 = 352407025;
unsigned char var_12 = (unsigned char)27;
unsigned long long int var_13 = 13937765449628176623ULL;
unsigned short var_15 = (unsigned short)253;
int var_16 = 144169970;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)197;
short var_19 = (short)12105;
unsigned int var_20 = 2670133178U;
int var_21 = 859304038;
short var_22 = (short)6258;
int var_23 = 1332606419;
unsigned int var_24 = 553574330U;
_Bool var_25 = (_Bool)0;
int var_26 = 866036795;
unsigned int var_27 = 2863595412U;
unsigned short var_28 = (unsigned short)29022;
short var_29 = (short)-3573;
short var_30 = (short)-12973;
unsigned char var_31 = (unsigned char)95;
short var_32 = (short)-27208;
unsigned int var_33 = 3922763317U;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)0;
unsigned int var_36 = 556368682U;
unsigned int arr_17 [16] [16] [16] [16] [16] [16] [16] ;
long long int arr_26 [16] [16] [16] ;
_Bool arr_32 [13] ;
unsigned long long int arr_33 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 2006619648U : 3852940048U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6947956565657031137LL : -1569831469962379950LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = 6141207811139187709ULL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
