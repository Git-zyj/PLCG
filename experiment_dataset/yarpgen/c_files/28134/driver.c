#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2653185719U;
unsigned long long int var_1 = 5563671563959541014ULL;
unsigned char var_2 = (unsigned char)11;
short var_3 = (short)-9158;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)153;
int var_8 = -1252937199;
int var_9 = -391732139;
long long int var_10 = 7130169002489659779LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-17194;
unsigned char var_13 = (unsigned char)180;
short var_14 = (short)-20717;
unsigned int var_15 = 608459777U;
unsigned int var_16 = 143087764U;
unsigned long long int var_17 = 11925078875741099030ULL;
signed char var_18 = (signed char)-54;
unsigned long long int var_19 = 3765052611615822765ULL;
short var_20 = (short)-1370;
short var_21 = (short)-19398;
unsigned short var_22 = (unsigned short)22760;
int var_23 = -72873271;
_Bool arr_0 [10] ;
unsigned char arr_1 [10] ;
unsigned long long int arr_2 [10] ;
signed char arr_3 [21] [21] ;
short arr_4 [21] [21] ;
unsigned short arr_6 [21] ;
unsigned long long int arr_7 [21] ;
short arr_8 [21] ;
short arr_5 [21] ;
unsigned int arr_9 [21] ;
long long int arr_10 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4433344593143082396ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-23 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)2246;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)57625;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 6248524891388585010ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (short)-7316;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)24297 : (short)7009;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 4157450213U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 1421593085919596604LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
