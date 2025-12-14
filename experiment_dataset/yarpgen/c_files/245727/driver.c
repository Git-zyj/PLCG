#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)76;
signed char var_5 = (signed char)-18;
int var_7 = -346074739;
long long int var_10 = 6291400293901779007LL;
unsigned short var_13 = (unsigned short)34277;
int zero = 0;
unsigned int var_18 = 2916809139U;
signed char var_19 = (signed char)30;
unsigned short var_20 = (unsigned short)58737;
int var_21 = 1215221628;
unsigned char var_22 = (unsigned char)191;
unsigned char var_23 = (unsigned char)36;
short var_24 = (short)-18101;
long long int var_25 = -4184714614440718229LL;
long long int var_26 = -6397418157757726475LL;
signed char var_27 = (signed char)-18;
int var_28 = -258687215;
unsigned short var_29 = (unsigned short)56806;
signed char var_30 = (signed char)-27;
int arr_0 [23] [23] ;
_Bool arr_1 [23] [23] ;
int arr_3 [25] ;
unsigned char arr_4 [25] ;
int arr_6 [25] ;
unsigned int arr_10 [25] [25] ;
_Bool arr_11 [25] [25] ;
unsigned int arr_13 [25] ;
unsigned char arr_14 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 987385681;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -1999075432;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 194385788;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 4006462615U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 4043334646U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)82 : (unsigned char)149;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
