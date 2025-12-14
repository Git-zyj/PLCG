#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62622;
long long int var_2 = -5653867902071137295LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 10506583135034080576ULL;
signed char var_9 = (signed char)-8;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)126;
int zero = 0;
unsigned long long int var_13 = 2949400010657185768ULL;
int var_14 = 531847185;
int var_15 = -849683168;
unsigned int var_16 = 2393539327U;
unsigned long long int var_17 = 2723687252313712844ULL;
unsigned short var_18 = (unsigned short)43391;
unsigned long long int var_19 = 10040034135201265529ULL;
unsigned char var_20 = (unsigned char)170;
unsigned int var_21 = 4178468892U;
_Bool var_22 = (_Bool)0;
short arr_2 [15] [15] ;
int arr_4 [18] ;
long long int arr_5 [18] ;
int arr_6 [18] ;
int arr_9 [18] ;
int arr_10 [18] ;
_Bool arr_11 [18] ;
signed char arr_12 [18] [18] ;
short arr_13 [18] [18] ;
unsigned short arr_15 [18] ;
unsigned char arr_17 [18] [18] [18] [18] ;
unsigned short arr_18 [18] [18] [18] [18] ;
short arr_19 [18] [18] [18] [18] ;
unsigned long long int arr_3 [15] ;
short arr_7 [18] ;
unsigned char arr_8 [18] ;
short arr_20 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-3545 : (short)1296;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1816575149;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -8328296764178566236LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -569248097;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -1594044894;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 2060717107;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-23729;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (unsigned short)39765;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)17563;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (short)19582;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 17641439125048558235ULL : 12357011984579916271ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (short)-2739;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (short)27228 : (short)-32196;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
