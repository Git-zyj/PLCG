#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15979637850751522873ULL;
int var_3 = -1959067957;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)36893;
unsigned long long int var_10 = 9850912690704804469ULL;
short var_16 = (short)-27707;
signed char var_18 = (signed char)-31;
short var_19 = (short)-23704;
int zero = 0;
short var_20 = (short)-18212;
unsigned char var_21 = (unsigned char)112;
unsigned int var_22 = 2110729666U;
unsigned char var_23 = (unsigned char)169;
signed char var_24 = (signed char)-46;
unsigned long long int var_25 = 5179583631108447730ULL;
unsigned short var_26 = (unsigned short)15070;
int var_27 = 1435682310;
short var_28 = (short)-22719;
int var_29 = -1748910851;
long long int var_30 = -5617090649540314581LL;
_Bool var_31 = (_Bool)1;
short var_32 = (short)-17769;
short var_33 = (short)-9163;
unsigned int arr_0 [18] [18] ;
signed char arr_1 [18] ;
int arr_2 [18] [18] ;
unsigned short arr_3 [15] ;
signed char arr_4 [15] ;
short arr_7 [11] [11] ;
unsigned short arr_10 [13] ;
unsigned long long int arr_11 [13] ;
int arr_12 [13] [13] [13] ;
int arr_13 [13] ;
short arr_14 [13] ;
short arr_16 [13] ;
unsigned short arr_18 [13] ;
short arr_5 [15] ;
unsigned int arr_9 [11] ;
int arr_15 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 3616870724U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 2073389206;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)58744;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)28271;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned short)27842;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 12680785020845391848ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 82231800 : -1763222554;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -327810846 : 58072936;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (short)10178;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (short)-17973;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (unsigned short)13202;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)-24612;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 2156796722U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 685618753 : -338152334;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
