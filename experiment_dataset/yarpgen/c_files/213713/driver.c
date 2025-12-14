#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2805174582U;
unsigned long long int var_1 = 12126357166155400733ULL;
short var_2 = (short)-836;
unsigned char var_3 = (unsigned char)43;
unsigned int var_6 = 551129463U;
long long int var_7 = 1640868134967684751LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2537852125U;
unsigned int var_12 = 1954702702U;
unsigned long long int var_13 = 2612512391342364499ULL;
unsigned long long int var_15 = 8466284466319701910ULL;
unsigned char var_17 = (unsigned char)125;
unsigned int var_18 = 3927809755U;
unsigned short var_19 = (unsigned short)56957;
int zero = 0;
int var_20 = 695091897;
unsigned int var_21 = 1785614310U;
unsigned int var_22 = 2094649254U;
unsigned short var_23 = (unsigned short)17401;
unsigned int var_24 = 2999717651U;
unsigned int var_25 = 516729795U;
signed char var_26 = (signed char)-60;
int var_27 = 986397331;
signed char var_28 = (signed char)-73;
long long int var_29 = -3121550059014895952LL;
_Bool var_30 = (_Bool)1;
int var_31 = 1848819480;
long long int var_32 = 6170877863428247269LL;
unsigned char var_33 = (unsigned char)143;
short arr_0 [17] [17] ;
_Bool arr_2 [17] ;
unsigned int arr_4 [17] [17] [17] ;
unsigned char arr_5 [17] [17] [17] ;
unsigned char arr_6 [17] [17] ;
unsigned int arr_7 [17] [17] ;
long long int arr_8 [17] [17] ;
unsigned long long int arr_9 [17] [17] ;
long long int arr_13 [17] ;
_Bool arr_15 [17] [17] [17] ;
_Bool arr_16 [17] [17] ;
_Bool arr_20 [17] [17] ;
unsigned long long int arr_10 [17] [17] [17] ;
unsigned long long int arr_11 [17] ;
unsigned short arr_14 [17] [17] ;
unsigned char arr_17 [17] [17] ;
unsigned long long int arr_21 [17] ;
unsigned short arr_22 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)13864;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2459977221U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)233 : (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 2584618136U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 1087096454748206533LL : 641509467812513797LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 14086190320686738721ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 1822381306206919511LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6079062116141547532ULL : 9399804172004146962ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2697390692640439765ULL : 7473367169436347861ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)31112;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = 3867533169870227836ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (unsigned short)8892;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
