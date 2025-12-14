#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8810;
_Bool var_5 = (_Bool)1;
long long int var_7 = 2199182177123460472LL;
unsigned long long int var_8 = 11723754084616934147ULL;
unsigned char var_9 = (unsigned char)120;
unsigned short var_11 = (unsigned short)45874;
int var_12 = 141687467;
short var_15 = (short)11591;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 106424859;
signed char var_18 = (signed char)-85;
short var_19 = (short)-8314;
short var_20 = (short)9787;
unsigned short var_21 = (unsigned short)9634;
unsigned long long int var_22 = 3091995644891463810ULL;
short var_23 = (short)-31562;
unsigned short var_24 = (unsigned short)1827;
_Bool var_25 = (_Bool)0;
long long int var_26 = 8678452092255159733LL;
int var_27 = 1151559164;
_Bool var_28 = (_Bool)0;
short arr_0 [23] ;
short arr_1 [23] ;
unsigned int arr_2 [23] ;
unsigned int arr_3 [23] ;
unsigned char arr_4 [23] [23] [23] ;
unsigned short arr_5 [23] ;
unsigned long long int arr_6 [23] [23] ;
unsigned char arr_8 [23] ;
int arr_11 [23] ;
unsigned int arr_13 [23] [23] [23] [23] ;
unsigned short arr_9 [23] ;
unsigned short arr_10 [23] ;
unsigned char arr_15 [23] ;
unsigned int arr_16 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)31213;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)519;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3300621343U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3969407989U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)11474;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 9179671272765444768ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = -1781479487;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 3444804726U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23744 : (unsigned short)35824;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35348 : (unsigned short)31687;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 2019412144U;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
