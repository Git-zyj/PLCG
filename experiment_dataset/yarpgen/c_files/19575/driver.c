#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4968166323573694801LL;
unsigned char var_2 = (unsigned char)205;
_Bool var_4 = (_Bool)1;
int var_5 = 585153605;
short var_6 = (short)17693;
short var_7 = (short)3578;
int var_8 = 1859502347;
unsigned int var_9 = 992538799U;
unsigned int var_10 = 2995402264U;
short var_11 = (short)-12479;
unsigned short var_15 = (unsigned short)41940;
unsigned short var_17 = (unsigned short)33777;
int zero = 0;
unsigned short var_18 = (unsigned short)6703;
unsigned long long int var_19 = 3507056456745365154ULL;
short var_20 = (short)22186;
int var_21 = -1734342876;
int var_22 = 1483494060;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-3169;
unsigned short var_25 = (unsigned short)3703;
unsigned int var_26 = 3806715416U;
long long int var_27 = 3953844924640248875LL;
unsigned long long int var_28 = 6050305140064261986ULL;
long long int var_29 = 1288387848747462587LL;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 2778608852U;
unsigned short var_32 = (unsigned short)43664;
unsigned short var_33 = (unsigned short)27877;
short arr_3 [11] ;
unsigned int arr_6 [11] ;
unsigned short arr_7 [11] [11] [11] [11] ;
unsigned int arr_10 [11] [11] ;
unsigned int arr_15 [19] [19] ;
unsigned short arr_16 [19] ;
unsigned short arr_24 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-8336;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 1789463805U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)29022;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 4143845090U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = 1824293345U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (unsigned short)26454;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)61077 : (unsigned short)8517;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
