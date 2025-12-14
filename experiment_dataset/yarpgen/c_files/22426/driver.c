#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1707211235601737845ULL;
signed char var_1 = (signed char)-104;
unsigned short var_3 = (unsigned short)20285;
signed char var_4 = (signed char)-126;
long long int var_5 = -5776242153187922518LL;
unsigned int var_7 = 320372755U;
unsigned long long int var_8 = 17182432368847074367ULL;
long long int var_9 = 1621490876286335536LL;
unsigned short var_11 = (unsigned short)32540;
unsigned long long int var_12 = 5894119632211361161ULL;
_Bool var_13 = (_Bool)1;
short var_16 = (short)-20887;
unsigned short var_19 = (unsigned short)57275;
int zero = 0;
long long int var_20 = 4855255462903478232LL;
unsigned int var_21 = 3958780800U;
short var_22 = (short)8209;
unsigned char var_23 = (unsigned char)219;
signed char var_24 = (signed char)29;
unsigned int var_25 = 3754298807U;
unsigned char var_26 = (unsigned char)159;
unsigned short arr_0 [16] [16] ;
long long int arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
int arr_3 [17] [17] ;
signed char arr_4 [17] [17] ;
short arr_7 [25] ;
unsigned short arr_9 [25] ;
unsigned int arr_5 [17] [17] ;
unsigned short arr_6 [17] ;
_Bool arr_10 [25] [25] ;
long long int arr_11 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)4545;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -1213771581664689531LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -611236532;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)29621;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)46063;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 1185818421U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)31437;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = -6039309827106328833LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
