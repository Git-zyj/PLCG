#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6453678455585502020LL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)52106;
unsigned char var_8 = (unsigned char)246;
unsigned long long int var_9 = 4892873979523914168ULL;
signed char var_10 = (signed char)-111;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-7572;
unsigned short var_14 = (unsigned short)3184;
int zero = 0;
int var_15 = -910820110;
long long int var_16 = 8921445043739492853LL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)79;
unsigned short var_19 = (unsigned short)35358;
_Bool var_20 = (_Bool)0;
int var_21 = -696262484;
unsigned int var_22 = 1580457164U;
int var_23 = 208661629;
short var_24 = (short)-16606;
unsigned char var_25 = (unsigned char)134;
unsigned char var_26 = (unsigned char)202;
_Bool var_27 = (_Bool)1;
int var_28 = 115020413;
unsigned long long int var_29 = 7369625187543691006ULL;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)228;
signed char var_32 = (signed char)-22;
unsigned char var_33 = (unsigned char)190;
long long int arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
short arr_3 [19] ;
long long int arr_7 [16] [16] ;
unsigned long long int arr_8 [16] ;
_Bool arr_9 [16] ;
long long int arr_10 [16] ;
_Bool arr_14 [16] ;
int arr_15 [16] [16] ;
signed char arr_23 [16] [16] [16] ;
unsigned short arr_24 [16] ;
unsigned short arr_25 [16] [16] [16] [16] ;
_Bool arr_26 [16] ;
_Bool arr_5 [19] ;
int arr_6 [19] [19] [19] ;
_Bool arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -202080176451043236LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)42261;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-20330;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 4355917557487396417LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 9167799560977463577ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 5689123548636529410LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 1718647625;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (unsigned short)44204;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned short)11805;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1133580921;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
