#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52506;
int var_1 = 1588591984;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-71;
signed char var_4 = (signed char)-101;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 1629579817093333423ULL;
long long int var_10 = -3128264575643357173LL;
int var_11 = -1543016783;
unsigned long long int var_12 = 15483152593615641175ULL;
int var_13 = 804127795;
unsigned int var_14 = 640778699U;
int zero = 0;
unsigned short var_15 = (unsigned short)12896;
long long int var_16 = -2211569591489973893LL;
short var_17 = (short)13528;
int var_18 = -1357277469;
unsigned int var_19 = 371407648U;
int var_20 = 252928247;
unsigned long long int var_21 = 3669693462741220540ULL;
unsigned long long int var_22 = 6206154338524789266ULL;
unsigned short var_23 = (unsigned short)54588;
int var_24 = -168666410;
int var_25 = 71563033;
int var_26 = -1271399745;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 1005561556U;
unsigned long long int var_29 = 14563959274282875961ULL;
short var_30 = (short)-2094;
unsigned short var_31 = (unsigned short)32978;
int arr_1 [10] [10] ;
unsigned short arr_2 [10] ;
_Bool arr_3 [10] ;
unsigned short arr_5 [10] [10] ;
unsigned long long int arr_7 [10] [10] [10] [10] ;
long long int arr_8 [10] [10] [10] ;
unsigned char arr_9 [10] [10] [10] [10] ;
int arr_20 [20] ;
long long int arr_21 [20] ;
unsigned long long int arr_22 [20] ;
long long int arr_18 [10] ;
long long int arr_19 [10] ;
unsigned int arr_23 [20] ;
signed char arr_24 [20] ;
short arr_27 [16] ;
int arr_28 [16] ;
unsigned short arr_29 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -1090616394 : 521752094;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)1863;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)44299;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3085071428086959253ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2515143739089021169LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = -491205921;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = -4104880058960371678LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = 15632309691143772196ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 8830486440495731159LL : -79419097976347555LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 8569403991425305642LL : 5483193883848198805LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = 1748206906U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (short)19960;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = -1576267483;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (unsigned short)12336;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
