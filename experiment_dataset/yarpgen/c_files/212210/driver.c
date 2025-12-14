#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2438965648U;
unsigned int var_2 = 3433612429U;
unsigned long long int var_3 = 13515682578010769963ULL;
signed char var_5 = (signed char)-35;
unsigned int var_6 = 3425421929U;
long long int var_7 = -355055963015646628LL;
short var_9 = (short)-26994;
unsigned long long int var_13 = 13472117087184794968ULL;
int zero = 0;
unsigned long long int var_18 = 10322446640601963209ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 40631865U;
signed char var_21 = (signed char)125;
unsigned char var_22 = (unsigned char)210;
unsigned int var_23 = 3270601369U;
unsigned char var_24 = (unsigned char)7;
unsigned char var_25 = (unsigned char)224;
short var_26 = (short)575;
unsigned int var_27 = 3966708963U;
unsigned char var_28 = (unsigned char)117;
signed char var_29 = (signed char)-86;
unsigned short arr_0 [25] ;
signed char arr_1 [25] [25] ;
unsigned char arr_2 [25] [25] ;
unsigned char arr_3 [25] ;
short arr_4 [25] [25] ;
unsigned int arr_6 [25] ;
unsigned long long int arr_8 [25] ;
_Bool arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)43825;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-1677;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 3221734080U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 13641684563253582002ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
