#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1337820613;
short var_2 = (short)-7389;
_Bool var_3 = (_Bool)0;
int var_4 = 1468923764;
int var_5 = 586971194;
int var_6 = -1879452087;
unsigned long long int var_7 = 4713887181696584759ULL;
signed char var_8 = (signed char)52;
long long int var_9 = 6875218332034216002LL;
unsigned short var_10 = (unsigned short)64811;
unsigned int var_12 = 426402911U;
unsigned int var_13 = 4064996542U;
int zero = 0;
short var_18 = (short)-4216;
signed char var_19 = (signed char)64;
short var_20 = (short)389;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)179;
unsigned char var_23 = (unsigned char)109;
unsigned char var_24 = (unsigned char)253;
signed char var_25 = (signed char)87;
unsigned long long int var_26 = 17138123699982928367ULL;
short var_27 = (short)-11553;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 960601808U;
unsigned long long int var_30 = 18033811578033152970ULL;
long long int var_31 = 5543058207822670181LL;
_Bool var_32 = (_Bool)1;
short var_33 = (short)11684;
int var_34 = 2142823830;
_Bool var_35 = (_Bool)0;
unsigned char arr_0 [10] [10] ;
_Bool arr_1 [10] ;
_Bool arr_3 [10] [10] ;
int arr_4 [22] ;
unsigned long long int arr_5 [22] ;
signed char arr_6 [22] ;
int arr_11 [20] [20] ;
int arr_12 [20] [20] ;
unsigned long long int arr_15 [20] [20] [20] ;
_Bool arr_16 [20] [20] [20] [20] ;
_Bool arr_17 [20] [20] ;
_Bool arr_25 [20] [20] [20] ;
int arr_26 [20] ;
short arr_7 [22] [22] ;
_Bool arr_8 [22] ;
unsigned long long int arr_27 [20] [20] [20] [20] ;
unsigned long long int arr_30 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -762539086;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 8572222344663872768ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 1218817820;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -1581663955 : -867768401;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 13459412090407427848ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = 1104667958;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-16458;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 6685284182072718966ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = 8136289974658873183ULL;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
