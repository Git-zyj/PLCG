#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8440443101448015161LL;
long long int var_3 = -4362296500859275664LL;
unsigned int var_5 = 255452771U;
short var_6 = (short)-19634;
unsigned long long int var_7 = 17282928933588563071ULL;
unsigned int var_9 = 19418461U;
unsigned short var_13 = (unsigned short)7705;
unsigned int var_14 = 2765415010U;
int var_15 = -715118369;
signed char var_16 = (signed char)-24;
int zero = 0;
unsigned int var_20 = 129826799U;
signed char var_21 = (signed char)-35;
signed char var_22 = (signed char)-20;
signed char var_23 = (signed char)-30;
int var_24 = -2064223444;
signed char var_25 = (signed char)-43;
int var_26 = -984468959;
signed char arr_0 [25] ;
int arr_1 [25] ;
int arr_5 [25] ;
signed char arr_6 [25] [25] ;
long long int arr_7 [25] ;
unsigned int arr_2 [25] [25] ;
int arr_8 [25] ;
signed char arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1408265125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -378014897;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -6721280429452769270LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 4204731937U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 2010303218;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (signed char)-125;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
