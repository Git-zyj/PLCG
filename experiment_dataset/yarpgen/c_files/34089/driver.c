#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)35;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)10;
signed char var_10 = (signed char)15;
unsigned char var_12 = (unsigned char)167;
unsigned int var_13 = 1193681630U;
int zero = 0;
unsigned int var_15 = 1267976572U;
unsigned int var_16 = 1460108104U;
long long int var_17 = 5255231370984057160LL;
int var_18 = -1492070350;
int var_19 = -728605240;
unsigned char var_20 = (unsigned char)121;
unsigned char var_21 = (unsigned char)214;
short var_22 = (short)-15000;
int var_23 = 2060798702;
signed char var_24 = (signed char)63;
int var_25 = -1553315047;
short var_26 = (short)24022;
long long int var_27 = -1137081445664280388LL;
unsigned int arr_0 [11] ;
unsigned long long int arr_1 [11] [11] ;
unsigned long long int arr_2 [25] [25] ;
signed char arr_3 [25] ;
int arr_4 [25] [25] ;
_Bool arr_5 [25] ;
unsigned char arr_7 [25] [25] ;
unsigned short arr_8 [25] [25] ;
signed char arr_6 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 142287759U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 8754764959566560729ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 10924169999096820832ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -179620999;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)35318;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-16;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
