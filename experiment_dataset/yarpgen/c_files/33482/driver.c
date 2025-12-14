#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-83;
unsigned int var_5 = 1246297716U;
unsigned short var_6 = (unsigned short)35144;
int var_11 = -128450900;
unsigned short var_14 = (unsigned short)44287;
signed char var_15 = (signed char)40;
int zero = 0;
unsigned short var_17 = (unsigned short)45135;
unsigned char var_18 = (unsigned char)108;
long long int var_19 = -2220412555002461388LL;
signed char var_20 = (signed char)95;
signed char var_21 = (signed char)76;
long long int var_22 = 5494439489591745639LL;
signed char var_23 = (signed char)9;
unsigned int var_24 = 1825149332U;
unsigned short var_25 = (unsigned short)48127;
unsigned short var_26 = (unsigned short)35091;
unsigned char var_27 = (unsigned char)5;
int arr_0 [15] ;
signed char arr_1 [15] [15] ;
int arr_2 [17] [17] ;
signed char arr_3 [17] [17] ;
unsigned short arr_4 [17] ;
int arr_5 [17] [17] [17] ;
unsigned short arr_7 [17] [17] ;
long long int arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1521620634;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -684614296;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)52438;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 765650465;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)33604;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 1413037881925099933LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
