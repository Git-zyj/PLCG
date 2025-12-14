#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)176;
int var_2 = 1111971582;
long long int var_3 = -3091777553356892797LL;
_Bool var_5 = (_Bool)1;
int var_6 = 1405142196;
long long int var_7 = 4468613650663125438LL;
long long int var_8 = 3841391632283866932LL;
long long int var_10 = -5945051017194075201LL;
_Bool var_12 = (_Bool)0;
int var_13 = 2075964039;
long long int var_14 = -4282268553477733231LL;
unsigned char var_16 = (unsigned char)72;
int zero = 0;
int var_17 = 2025036265;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 10149157123345264954ULL;
_Bool var_20 = (_Bool)1;
int var_21 = 1482254639;
long long int var_22 = -1276175192700121463LL;
int var_23 = 1945220659;
long long int var_24 = -8698246045378464293LL;
unsigned int var_25 = 220482598U;
unsigned long long int var_26 = 1633037985068337238ULL;
unsigned char var_27 = (unsigned char)250;
long long int arr_0 [25] ;
unsigned int arr_1 [25] ;
long long int arr_4 [22] [22] ;
long long int arr_6 [22] ;
long long int arr_13 [22] [22] [22] [22] ;
long long int arr_14 [22] [22] [22] [22] ;
unsigned int arr_16 [22] [22] [22] [22] ;
long long int arr_2 [25] ;
unsigned char arr_20 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -5460339219722560347LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1934256821U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 7312600673666691809LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -1980672434321570974LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -4443882621908565504LL : -1727375593895711482LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 7745136053541318780LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 822755527U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -7078925320061945522LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)62 : (unsigned char)244;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
