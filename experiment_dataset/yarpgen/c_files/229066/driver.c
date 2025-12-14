#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -151678921;
unsigned int var_3 = 3881741346U;
unsigned int var_4 = 1669250875U;
unsigned long long int var_6 = 6610481370497604718ULL;
unsigned char var_7 = (unsigned char)226;
signed char var_8 = (signed char)108;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16587042845799365962ULL;
unsigned long long int var_12 = 9611292817300123186ULL;
unsigned int var_13 = 4052033472U;
short var_14 = (short)-27379;
long long int var_15 = 3155335676398446485LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 440170988539414404ULL;
unsigned int var_18 = 1948781797U;
unsigned int var_19 = 2589564302U;
unsigned int var_20 = 2223245290U;
long long int var_21 = -3714433466075798632LL;
unsigned int var_22 = 3246937023U;
unsigned char var_23 = (unsigned char)252;
unsigned long long int var_24 = 16186803918515108182ULL;
unsigned int var_25 = 190779423U;
unsigned char var_26 = (unsigned char)80;
unsigned long long int var_27 = 1472875536246796592ULL;
unsigned char var_28 = (unsigned char)108;
unsigned int var_29 = 603002068U;
unsigned long long int var_30 = 17240321440825490220ULL;
signed char var_31 = (signed char)-22;
signed char var_32 = (signed char)75;
signed char arr_2 [12] ;
unsigned short arr_5 [11] ;
unsigned int arr_12 [11] [11] [11] ;
signed char arr_13 [11] [11] [11] ;
unsigned long long int arr_21 [11] [11] [11] ;
short arr_34 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-29 : (signed char)-117;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)48947;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1789288164U : 3653345329U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)37 : (signed char)-39;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10856349835407479453ULL : 8386287542604317828ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)10896 : (short)5005;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
