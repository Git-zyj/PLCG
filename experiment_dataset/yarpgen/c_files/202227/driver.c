#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
unsigned long long int var_2 = 1701796171196333373ULL;
unsigned char var_3 = (unsigned char)83;
short var_4 = (short)-28405;
short var_7 = (short)-25804;
short var_8 = (short)19542;
unsigned long long int var_9 = 14900939263308280373ULL;
short var_10 = (short)20803;
short var_11 = (short)-13473;
unsigned long long int var_12 = 8983070535772710010ULL;
short var_13 = (short)-10762;
unsigned short var_14 = (unsigned short)15249;
int zero = 0;
unsigned char var_15 = (unsigned char)40;
unsigned long long int var_16 = 8982948540900910803ULL;
short var_17 = (short)5107;
unsigned short var_18 = (unsigned short)35578;
unsigned short var_19 = (unsigned short)40632;
unsigned short var_20 = (unsigned short)49161;
short var_21 = (short)12371;
unsigned short var_22 = (unsigned short)64420;
unsigned long long int var_23 = 13775320807445231076ULL;
short var_24 = (short)13371;
unsigned short var_25 = (unsigned short)59326;
unsigned char var_26 = (unsigned char)247;
unsigned char var_27 = (unsigned char)52;
unsigned short var_28 = (unsigned short)35058;
unsigned short var_29 = (unsigned short)25178;
unsigned long long int arr_0 [12] [12] ;
short arr_1 [12] [12] ;
short arr_3 [12] ;
unsigned short arr_4 [12] ;
unsigned short arr_5 [12] ;
unsigned char arr_6 [12] ;
short arr_8 [12] [12] ;
unsigned long long int arr_10 [12] ;
short arr_19 [12] ;
unsigned long long int arr_20 [12] ;
unsigned char arr_21 [12] ;
unsigned long long int arr_22 [12] ;
unsigned char arr_26 [12] [12] [12] ;
unsigned char arr_2 [12] [12] ;
short arr_14 [12] [12] [12] ;
unsigned char arr_18 [12] [12] ;
unsigned short arr_27 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 14884011857007610865ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-13524;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-15415;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)4327;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)64809;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)41 : (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-13150;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 8363217375565348561ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)20372 : (short)-31547;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = 7254604485041125603ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 9672712798159878295ULL : 8085611937671818763ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)-3696;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)84 : (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29660 : (unsigned short)52915;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
