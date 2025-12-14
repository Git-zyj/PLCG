#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7450960198878802997LL;
short var_6 = (short)-20177;
unsigned short var_8 = (unsigned short)5305;
unsigned short var_16 = (unsigned short)49196;
int zero = 0;
unsigned long long int var_17 = 5939492196828942634ULL;
int var_18 = 1383116770;
unsigned char var_19 = (unsigned char)229;
int var_20 = 1254761243;
signed char var_21 = (signed char)-11;
int var_22 = 1953715150;
unsigned long long int var_23 = 3771811211153728730ULL;
signed char var_24 = (signed char)4;
unsigned short arr_0 [15] ;
unsigned short arr_2 [15] ;
unsigned short arr_3 [15] ;
unsigned char arr_4 [15] [15] ;
unsigned long long int arr_7 [10] [10] ;
int arr_8 [10] [10] ;
int arr_11 [10] [10] [10] ;
unsigned int arr_13 [10] [10] ;
int arr_14 [10] [10] [10] [10] ;
signed char arr_16 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)50096;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)534;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)30738;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 16476614254420705541ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = -1532023546;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1076065259;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 2039742851U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -261373497;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-61;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
