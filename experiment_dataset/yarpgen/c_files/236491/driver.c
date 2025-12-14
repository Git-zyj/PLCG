#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1326749270U;
unsigned char var_2 = (unsigned char)145;
unsigned long long int var_3 = 2243674471842918566ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1153198732U;
unsigned short var_9 = (unsigned short)1984;
unsigned long long int var_11 = 8464117975849698273ULL;
unsigned long long int var_12 = 2635034142256096985ULL;
signed char var_13 = (signed char)46;
short var_16 = (short)-32327;
unsigned long long int var_17 = 2552886358366970730ULL;
int zero = 0;
unsigned long long int var_19 = 14891285664747827657ULL;
unsigned int var_20 = 395622060U;
long long int var_21 = -3662172333774767669LL;
unsigned long long int var_22 = 7969395935763818609ULL;
long long int arr_0 [18] [18] ;
long long int arr_2 [18] [18] ;
unsigned short arr_3 [18] [18] ;
int arr_7 [11] ;
int arr_8 [11] [11] ;
unsigned long long int arr_4 [18] ;
int arr_5 [18] ;
short arr_6 [18] ;
unsigned short arr_9 [11] ;
unsigned long long int arr_10 [11] ;
unsigned char arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -7441968408578127646LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 995130634507713058LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)15930;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 1492812114;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = -1605407436;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 14871712842440619274ULL : 4513095164058992439ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1880268275 : 22603988;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-20568 : (short)-6944;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned short)52047;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 5038700458637972824ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned char)193;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
