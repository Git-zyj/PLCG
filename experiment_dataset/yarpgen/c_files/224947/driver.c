#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2061117969;
short var_2 = (short)26697;
unsigned long long int var_3 = 9838881719071148554ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)13068;
unsigned char var_6 = (unsigned char)70;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)42;
unsigned short var_9 = (unsigned short)59666;
unsigned short var_10 = (unsigned short)37690;
signed char var_11 = (signed char)65;
unsigned long long int var_12 = 17206932650368377526ULL;
int zero = 0;
unsigned long long int var_16 = 14376675659234896203ULL;
long long int var_17 = 6137547505646013835LL;
unsigned char var_18 = (unsigned char)62;
int var_19 = 330197403;
unsigned long long int var_20 = 9639348333568707619ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
long long int arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
short arr_3 [14] [14] ;
unsigned short arr_4 [14] ;
_Bool arr_9 [14] ;
short arr_10 [14] [14] [14] [14] ;
unsigned short arr_14 [13] ;
short arr_6 [14] [14] ;
signed char arr_12 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -2580520697397066442LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 6339802270927471920ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-3717;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)35059;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-10657;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned short)52275;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (short)14403;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)57;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
