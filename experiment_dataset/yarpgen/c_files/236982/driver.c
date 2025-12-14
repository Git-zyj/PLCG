#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31889;
unsigned int var_2 = 2034865656U;
int var_4 = -485060048;
signed char var_5 = (signed char)118;
signed char var_6 = (signed char)26;
unsigned char var_8 = (unsigned char)120;
signed char var_10 = (signed char)27;
unsigned long long int var_11 = 9982340709172881184ULL;
unsigned long long int var_13 = 15943763602338680260ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 1459751754738652628ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)54;
unsigned long long int var_19 = 3045965009211407521ULL;
short var_20 = (short)13347;
short var_21 = (short)10435;
unsigned short var_22 = (unsigned short)40107;
int arr_0 [18] [18] ;
unsigned long long int arr_1 [18] [18] ;
_Bool arr_2 [18] [18] ;
_Bool arr_3 [18] [18] ;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 1360407797;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 17356769287512423578ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1779340543242486745ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
