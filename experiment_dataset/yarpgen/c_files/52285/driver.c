#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 756805433115639834ULL;
unsigned short var_1 = (unsigned short)1006;
unsigned short var_3 = (unsigned short)7905;
unsigned char var_4 = (unsigned char)3;
unsigned int var_6 = 2109104006U;
unsigned char var_7 = (unsigned char)32;
int var_9 = 1772193252;
int zero = 0;
long long int var_11 = -2836630422706250591LL;
unsigned short var_12 = (unsigned short)55627;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)19;
signed char var_15 = (signed char)35;
signed char var_16 = (signed char)-121;
unsigned int var_17 = 949079160U;
_Bool var_18 = (_Bool)0;
signed char arr_0 [22] ;
unsigned short arr_1 [22] [22] ;
unsigned int arr_4 [21] ;
unsigned long long int arr_7 [21] [21] ;
unsigned short arr_8 [21] ;
int arr_2 [22] ;
int arr_3 [22] ;
long long int arr_6 [21] [21] ;
long long int arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)21099;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 79640991U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 12935447424393166707ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned short)23900;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -1006800574;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -1674503861;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -3091251533760085650LL : -4090693145855301118LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2816008053025193146LL : -5292586707124588709LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
