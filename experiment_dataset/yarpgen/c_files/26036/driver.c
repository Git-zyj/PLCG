#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)39;
short var_5 = (short)1318;
signed char var_15 = (signed char)-22;
int zero = 0;
unsigned char var_19 = (unsigned char)225;
unsigned short var_20 = (unsigned short)12216;
unsigned long long int var_21 = 1993576312761422683ULL;
signed char var_22 = (signed char)16;
unsigned char var_23 = (unsigned char)36;
signed char var_24 = (signed char)-5;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)5339;
short var_27 = (short)11915;
_Bool var_28 = (_Bool)1;
short var_29 = (short)24618;
_Bool var_30 = (_Bool)1;
signed char arr_0 [19] ;
signed char arr_3 [22] [22] ;
unsigned short arr_4 [22] ;
_Bool arr_5 [22] ;
_Bool arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)36264;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
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
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
