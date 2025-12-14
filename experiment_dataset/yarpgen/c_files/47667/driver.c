#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15292;
short var_2 = (short)-17122;
int var_7 = -299315765;
unsigned int var_10 = 899131157U;
unsigned int var_12 = 385301875U;
unsigned short var_13 = (unsigned short)21240;
short var_14 = (short)-4038;
signed char var_16 = (signed char)74;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)28039;
unsigned char var_20 = (unsigned char)104;
signed char var_21 = (signed char)-14;
unsigned long long int var_22 = 773376857155319211ULL;
unsigned short var_23 = (unsigned short)54937;
int var_24 = 461592672;
unsigned char var_25 = (unsigned char)140;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)52874;
short var_28 = (short)-2825;
short var_29 = (short)-25076;
signed char var_30 = (signed char)-70;
unsigned int var_31 = 1747557524U;
unsigned int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
short arr_4 [13] ;
_Bool arr_9 [13] [13] [13] ;
_Bool arr_13 [13] [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 812715277U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 14889894904251023149ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)8708;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
