#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1704733312U;
short var_1 = (short)-17714;
unsigned long long int var_2 = 18030777373369604164ULL;
unsigned long long int var_5 = 9531899307123622927ULL;
unsigned long long int var_6 = 5813902943153240418ULL;
signed char var_8 = (signed char)-49;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)140;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3176840157U;
int zero = 0;
signed char var_13 = (signed char)123;
long long int var_14 = -5335950490824229654LL;
long long int var_15 = -1733247211054630497LL;
unsigned int var_16 = 2034590667U;
int var_17 = 951539589;
signed char var_18 = (signed char)86;
int var_19 = 699166092;
unsigned int var_20 = 2592089195U;
unsigned long long int arr_0 [23] ;
unsigned char arr_1 [23] ;
_Bool arr_2 [23] ;
_Bool arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3898960840022794704ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
