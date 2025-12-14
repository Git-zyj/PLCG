#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2162424391354552304LL;
int var_1 = -1739858000;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)80;
short var_6 = (short)19086;
unsigned int var_7 = 2060155971U;
unsigned int var_8 = 2207284327U;
unsigned short var_9 = (unsigned short)42675;
short var_10 = (short)-7539;
unsigned long long int var_11 = 4240566567341113579ULL;
unsigned short var_12 = (unsigned short)11956;
int zero = 0;
unsigned short var_13 = (unsigned short)30301;
unsigned short var_14 = (unsigned short)25745;
unsigned short var_15 = (unsigned short)6312;
short var_16 = (short)7387;
int var_17 = -1245981006;
unsigned short var_18 = (unsigned short)12224;
unsigned short var_19 = (unsigned short)10633;
unsigned short var_20 = (unsigned short)45864;
short var_21 = (short)8183;
short arr_0 [14] [14] ;
unsigned short arr_1 [14] [14] ;
unsigned int arr_2 [14] ;
unsigned short arr_6 [21] ;
unsigned long long int arr_7 [21] ;
long long int arr_3 [14] ;
short arr_4 [14] ;
unsigned short arr_5 [14] ;
int arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)9846;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)16870;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4085244527U : 4051863246U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)12174;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 7301871374922327979ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7513737456675137338LL : 7704420431187454158LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-32236 : (short)3337;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21798 : (unsigned short)3759;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 1018882061;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
