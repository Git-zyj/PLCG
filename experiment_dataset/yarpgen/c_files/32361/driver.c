#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36460;
unsigned long long int var_6 = 15409011840374801155ULL;
unsigned char var_8 = (unsigned char)23;
signed char var_11 = (signed char)120;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_18 = (short)-29515;
_Bool var_19 = (_Bool)1;
short var_20 = (short)6793;
_Bool var_21 = (_Bool)0;
long long int var_22 = -2473748164483474459LL;
unsigned int var_23 = 2707476814U;
signed char var_24 = (signed char)83;
unsigned short var_25 = (unsigned short)15334;
long long int var_26 = 3942472436513728103LL;
unsigned int var_27 = 1021845899U;
short var_28 = (short)4943;
unsigned char var_29 = (unsigned char)39;
unsigned char var_30 = (unsigned char)31;
signed char var_31 = (signed char)99;
long long int var_32 = 278802522356595759LL;
unsigned int arr_0 [20] ;
unsigned long long int arr_2 [20] ;
unsigned char arr_5 [20] [20] ;
unsigned int arr_11 [20] [20] [20] ;
short arr_12 [20] [20] [20] ;
unsigned char arr_19 [15] ;
unsigned long long int arr_28 [15] [15] ;
unsigned short arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3423908375U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 18263539933350795392ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2205362718U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-6372 : (short)-12298;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_28 [i_0] [i_1] = 16774594051096106445ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)17996;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
