#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2991775875U;
int var_4 = -844358221;
int var_7 = 1398541068;
int var_9 = -1168072538;
unsigned long long int var_15 = 15833119442006964552ULL;
int zero = 0;
unsigned int var_17 = 271026861U;
unsigned long long int var_18 = 14217123177993644430ULL;
short var_19 = (short)946;
unsigned int var_20 = 3089827998U;
short var_21 = (short)27799;
unsigned int var_22 = 140413478U;
int var_23 = 578734591;
unsigned long long int var_24 = 2958148629307574570ULL;
int arr_0 [23] [23] ;
long long int arr_1 [23] [23] ;
long long int arr_2 [23] ;
unsigned char arr_5 [20] ;
unsigned int arr_6 [20] ;
unsigned int arr_7 [20] ;
int arr_10 [19] ;
long long int arr_11 [19] ;
long long int arr_13 [16] ;
unsigned short arr_15 [16] ;
unsigned int arr_19 [14] [14] ;
signed char arr_25 [25] [25] ;
int arr_3 [23] [23] ;
long long int arr_4 [23] ;
unsigned int arr_8 [20] ;
long long int arr_12 [19] ;
unsigned short arr_16 [16] ;
int arr_20 [14] ;
unsigned int arr_21 [14] [14] ;
unsigned long long int arr_26 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -541202235 : 647432025;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -4555736137170274023LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -209735325004931446LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 2824496651U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1234601713U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = -110449206;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 3377091632161775135LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 4529708164566885189LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (unsigned short)36587;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = 239382895U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -534009308 : -1121247086;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 8116490388996964948LL : 8811746931068794861LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 793551344U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 699068957192041412LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14287 : (unsigned short)38106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = -840354103;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = 139311772U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = 9367369447054601668ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
