#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2173385360805284876ULL;
signed char var_2 = (signed char)39;
unsigned char var_3 = (unsigned char)241;
long long int var_7 = -1451460367065919610LL;
signed char var_9 = (signed char)3;
short var_10 = (short)14237;
unsigned char var_11 = (unsigned char)96;
long long int var_14 = 6637496341758280893LL;
int zero = 0;
unsigned short var_17 = (unsigned short)35566;
short var_18 = (short)22597;
short var_19 = (short)-29882;
unsigned short var_20 = (unsigned short)5868;
long long int var_21 = -1804915500734679012LL;
short var_22 = (short)-26510;
unsigned short var_23 = (unsigned short)26262;
short var_24 = (short)-27701;
unsigned short var_25 = (unsigned short)22177;
unsigned long long int var_26 = 14748232396316472655ULL;
int var_27 = 1828836036;
long long int var_28 = 272432885470406999LL;
long long int var_29 = -3095937329690546511LL;
unsigned long long int var_30 = 17131573629098531269ULL;
unsigned short arr_0 [22] ;
long long int arr_1 [22] ;
long long int arr_2 [22] ;
long long int arr_4 [15] [15] ;
unsigned long long int arr_5 [15] ;
unsigned long long int arr_6 [15] ;
unsigned short arr_7 [24] ;
unsigned char arr_8 [24] ;
unsigned short arr_10 [20] [20] ;
long long int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)14709;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -2446374487126743682LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -208922672954575573LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -2730689376676392368LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 18229979312221025485ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 3904119547861887966ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59227 : (unsigned short)3594;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)7750;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 201681719946687400LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
