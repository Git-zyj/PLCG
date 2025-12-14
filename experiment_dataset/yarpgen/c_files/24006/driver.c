#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2097643184;
signed char var_6 = (signed char)51;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 14447135258587880253ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)165;
short var_20 = (short)-14903;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)18;
signed char var_23 = (signed char)-76;
long long int var_24 = -8403534018956569423LL;
signed char var_25 = (signed char)78;
unsigned char var_26 = (unsigned char)33;
unsigned long long int arr_0 [20] [20] ;
signed char arr_2 [20] ;
unsigned short arr_4 [20] ;
_Bool arr_5 [20] ;
short arr_8 [18] [18] ;
unsigned int arr_9 [18] ;
unsigned long long int arr_6 [20] ;
short arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 16377445625077167754ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)1734;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-27686 : (short)3991;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 4098506474U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7505939997902266495ULL : 14873081308439964885ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)14621 : (short)-26420;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
