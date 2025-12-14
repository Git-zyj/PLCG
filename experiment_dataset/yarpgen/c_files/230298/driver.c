#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
int var_1 = -1024181997;
long long int var_3 = -6968672114351947931LL;
unsigned short var_4 = (unsigned short)11202;
unsigned long long int var_5 = 10139469618338824733ULL;
short var_7 = (short)4198;
short var_9 = (short)23763;
int zero = 0;
signed char var_10 = (signed char)107;
long long int var_11 = 9209518886413551902LL;
signed char var_12 = (signed char)-88;
unsigned char var_13 = (unsigned char)78;
unsigned long long int var_14 = 13817234018582379538ULL;
unsigned int var_15 = 766042324U;
unsigned short var_16 = (unsigned short)46164;
long long int arr_1 [15] [15] ;
signed char arr_2 [15] ;
unsigned char arr_3 [15] [15] ;
unsigned char arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -8321672419028064036LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)59 : (unsigned char)235;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
