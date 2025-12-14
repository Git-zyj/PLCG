#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 618583517280885839ULL;
short var_1 = (short)-25722;
unsigned int var_2 = 1180088339U;
unsigned long long int var_3 = 15650212814474422809ULL;
unsigned char var_4 = (unsigned char)247;
unsigned long long int var_5 = 13853247864994699316ULL;
unsigned int var_7 = 2356499708U;
short var_8 = (short)-27526;
unsigned char var_9 = (unsigned char)4;
int zero = 0;
unsigned short var_10 = (unsigned short)52690;
unsigned int var_11 = 1193085811U;
unsigned short var_12 = (unsigned short)39864;
signed char var_13 = (signed char)-69;
unsigned int var_14 = 3665427406U;
int var_15 = 274936273;
unsigned long long int arr_0 [12] [12] ;
signed char arr_2 [12] ;
signed char arr_4 [23] ;
short arr_5 [23] [23] ;
int arr_6 [23] [23] ;
unsigned short arr_3 [12] ;
signed char arr_7 [23] ;
unsigned char arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 6655060765382584608ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)22993;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 806748996;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)43017;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)45;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
