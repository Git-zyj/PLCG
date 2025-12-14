#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -3553168981798442119LL;
int var_2 = 1224723171;
unsigned char var_3 = (unsigned char)217;
signed char var_4 = (signed char)-35;
unsigned short var_6 = (unsigned short)4318;
_Bool var_7 = (_Bool)0;
long long int var_8 = -8917081240154038842LL;
signed char var_10 = (signed char)-84;
short var_11 = (short)332;
int zero = 0;
signed char var_14 = (signed char)114;
unsigned char var_15 = (unsigned char)125;
unsigned char var_16 = (unsigned char)197;
unsigned short var_17 = (unsigned short)48063;
int var_18 = -1625107247;
unsigned int var_19 = 751446675U;
long long int var_20 = 7532419981951173847LL;
signed char var_21 = (signed char)111;
_Bool arr_0 [13] [13] ;
unsigned char arr_2 [13] [13] ;
unsigned short arr_3 [17] [17] ;
unsigned long long int arr_4 [17] ;
signed char arr_5 [17] ;
short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)135 : (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)12749 : (unsigned short)52860;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 4018725246734895497ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-101 : (signed char)-63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-3649 : (short)13597;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
