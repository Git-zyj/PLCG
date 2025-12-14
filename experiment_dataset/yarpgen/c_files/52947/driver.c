#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
signed char var_1 = (signed char)58;
signed char var_3 = (signed char)-74;
signed char var_4 = (signed char)-89;
unsigned int var_6 = 3944442110U;
unsigned short var_7 = (unsigned short)23334;
long long int var_8 = 732345154803126912LL;
unsigned short var_9 = (unsigned short)18041;
signed char var_10 = (signed char)81;
signed char var_11 = (signed char)38;
unsigned long long int var_13 = 6438385667298521935ULL;
unsigned char var_14 = (unsigned char)136;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-56;
unsigned short var_19 = (unsigned short)35925;
signed char arr_0 [22] ;
short arr_1 [22] ;
signed char arr_2 [22] ;
_Bool arr_7 [21] ;
int arr_12 [21] [21] ;
unsigned char arr_13 [21] ;
long long int arr_3 [22] ;
unsigned long long int arr_4 [22] ;
unsigned short arr_5 [22] [22] ;
short arr_9 [21] ;
unsigned char arr_10 [21] ;
long long int arr_11 [21] [21] ;
_Bool arr_16 [21] ;
short arr_17 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-29508;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -1454056835 : -1054525503;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)141 : (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -1667679107473804446LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 16626713042847966954ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)8741;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-26918 : (short)-6013;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)96 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -3089112796370205931LL : -2803219413224533108LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)26184 : (short)-30819;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
