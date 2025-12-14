#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2375672816U;
signed char var_1 = (signed char)-61;
unsigned short var_3 = (unsigned short)20534;
unsigned short var_4 = (unsigned short)51694;
short var_5 = (short)24538;
int var_6 = 961493502;
int var_7 = 390465633;
unsigned short var_8 = (unsigned short)23370;
unsigned int var_9 = 98308998U;
unsigned short var_10 = (unsigned short)53110;
_Bool var_11 = (_Bool)0;
int var_13 = 1538962050;
int zero = 0;
unsigned short var_14 = (unsigned short)50167;
unsigned int var_15 = 3613695420U;
unsigned char var_16 = (unsigned char)201;
unsigned char var_17 = (unsigned char)119;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)41575;
long long int var_21 = -7119183407906931299LL;
_Bool var_22 = (_Bool)0;
unsigned char arr_1 [20] [20] ;
short arr_2 [20] [20] ;
int arr_4 [20] [20] [20] ;
unsigned short arr_8 [20] [20] [20] ;
unsigned int arr_15 [20] [20] [20] [20] ;
short arr_6 [20] ;
unsigned char arr_9 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-3641;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1336741080 : -219752940;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)27018 : (unsigned short)31700;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 2049221884U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)5810 : (short)19823;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)228;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
