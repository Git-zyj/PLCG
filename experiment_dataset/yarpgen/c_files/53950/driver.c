#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 260477218U;
short var_3 = (short)24470;
unsigned short var_8 = (unsigned short)18109;
unsigned long long int var_10 = 16107881238520557656ULL;
unsigned short var_12 = (unsigned short)40994;
unsigned short var_15 = (unsigned short)38107;
int zero = 0;
unsigned short var_18 = (unsigned short)32726;
unsigned short var_19 = (unsigned short)12748;
unsigned short var_20 = (unsigned short)38470;
short var_21 = (short)21106;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
short var_24 = (short)19502;
unsigned short var_25 = (unsigned short)44056;
unsigned short var_26 = (unsigned short)63097;
unsigned short var_27 = (unsigned short)5406;
unsigned short arr_0 [22] [22] ;
_Bool arr_1 [22] ;
unsigned int arr_3 [22] ;
short arr_11 [11] ;
short arr_2 [22] ;
unsigned long long int arr_6 [22] [22] ;
unsigned short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)13977;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3559704690U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (short)-3706;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)3548 : (short)-6675;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 6274722407198699988ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)6981;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
