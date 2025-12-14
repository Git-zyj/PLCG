#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4125978508U;
unsigned short var_2 = (unsigned short)60011;
unsigned long long int var_4 = 12674307436451785388ULL;
unsigned char var_7 = (unsigned char)159;
unsigned short var_8 = (unsigned short)48420;
unsigned long long int var_9 = 6606377776031648396ULL;
unsigned char var_10 = (unsigned char)41;
unsigned char var_11 = (unsigned char)217;
unsigned char var_12 = (unsigned char)188;
unsigned short var_13 = (unsigned short)28865;
unsigned long long int var_14 = 11510673559465610693ULL;
unsigned long long int var_15 = 12874199817560198012ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)11448;
unsigned short var_17 = (unsigned short)47111;
unsigned char var_18 = (unsigned char)203;
unsigned long long int var_19 = 17370462493394141269ULL;
unsigned long long int var_20 = 3087127259920982907ULL;
unsigned char var_21 = (unsigned char)114;
unsigned int arr_0 [25] ;
unsigned long long int arr_1 [25] ;
unsigned char arr_2 [25] [25] ;
unsigned int arr_4 [14] ;
unsigned long long int arr_3 [25] [25] ;
unsigned char arr_7 [14] ;
unsigned int arr_8 [14] [14] ;
unsigned short arr_11 [25] ;
unsigned short arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1443757818U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 6576882135563229431ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1072387311U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 10285242926881280230ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 3085800758U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned short)4893;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned short)38277;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
