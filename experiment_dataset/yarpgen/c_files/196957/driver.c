#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 381842948416494328LL;
unsigned char var_1 = (unsigned char)32;
short var_4 = (short)-17875;
signed char var_6 = (signed char)28;
unsigned long long int var_7 = 942652829874387483ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 6555923326418236015LL;
short var_10 = (short)-11717;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-28;
int var_16 = -1655302143;
int var_17 = -1929664201;
int zero = 0;
long long int var_18 = -2322814282621837452LL;
short var_19 = (short)-7788;
signed char var_20 = (signed char)102;
signed char var_21 = (signed char)5;
signed char var_22 = (signed char)31;
signed char var_23 = (signed char)-18;
int var_24 = 1507753375;
signed char var_25 = (signed char)98;
signed char var_26 = (signed char)81;
int var_27 = 234523137;
short arr_0 [11] ;
signed char arr_1 [11] ;
signed char arr_3 [14] ;
long long int arr_4 [14] ;
signed char arr_5 [14] ;
int arr_6 [21] ;
unsigned char arr_7 [21] [21] ;
int arr_8 [21] ;
unsigned short arr_10 [21] [21] ;
_Bool arr_11 [21] [21] ;
int arr_16 [21] [21] ;
long long int arr_2 [11] ;
long long int arr_17 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-30943;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 606844719574445022LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -801011854;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -1442187851;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)12311;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 1064031117;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 8000715527615628653LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = -5366380628394059987LL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
