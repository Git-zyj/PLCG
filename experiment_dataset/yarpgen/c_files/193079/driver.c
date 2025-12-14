#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25474;
unsigned long long int var_1 = 15143900542871031915ULL;
unsigned long long int var_2 = 11711498338076330267ULL;
long long int var_3 = -3859822889097545595LL;
long long int var_5 = -7746640859886821480LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 16005702341941938342ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)16;
signed char var_11 = (signed char)16;
int zero = 0;
unsigned long long int var_12 = 2449433230724026656ULL;
unsigned char var_13 = (unsigned char)2;
unsigned short var_14 = (unsigned short)30719;
unsigned char var_15 = (unsigned char)254;
unsigned short var_16 = (unsigned short)20748;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)34;
unsigned char var_19 = (unsigned char)232;
unsigned short var_20 = (unsigned short)33242;
short var_21 = (short)27253;
unsigned short var_22 = (unsigned short)54876;
int var_23 = 1220098522;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)10;
unsigned char var_26 = (unsigned char)126;
unsigned short var_27 = (unsigned short)39317;
signed char var_28 = (signed char)-26;
signed char var_29 = (signed char)-16;
signed char var_30 = (signed char)-56;
unsigned char var_31 = (unsigned char)152;
signed char arr_1 [23] ;
short arr_2 [23] [23] ;
unsigned char arr_3 [23] [23] [23] ;
unsigned short arr_4 [23] [23] ;
unsigned long long int arr_8 [23] ;
int arr_12 [22] ;
unsigned long long int arr_14 [22] [22] ;
unsigned char arr_17 [22] ;
signed char arr_18 [22] [22] [22] [22] ;
unsigned char arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-11807;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)18590;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 12614338021666229915ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1110336929 : -1795977168;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 7388857434226409553ULL : 10014644180672824798ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)75 : (signed char)108;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)158;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
