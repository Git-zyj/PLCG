#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2658356434U;
unsigned char var_2 = (unsigned char)29;
int var_3 = 2026653034;
unsigned long long int var_4 = 2938569521123106705ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)44045;
unsigned short var_10 = (unsigned short)31812;
unsigned short var_11 = (unsigned short)1543;
unsigned int var_12 = 4111637287U;
short var_13 = (short)-5775;
unsigned short var_14 = (unsigned short)3684;
int zero = 0;
unsigned int var_15 = 4021168245U;
unsigned short var_16 = (unsigned short)1398;
unsigned short var_17 = (unsigned short)19807;
unsigned long long int var_18 = 7597374339913389159ULL;
short var_19 = (short)-3370;
unsigned int var_20 = 3683356489U;
unsigned char var_21 = (unsigned char)133;
long long int var_22 = -7693015222019850833LL;
unsigned int var_23 = 3310095914U;
unsigned int var_24 = 1727732480U;
unsigned short var_25 = (unsigned short)25106;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
short var_28 = (short)-7084;
unsigned short var_29 = (unsigned short)62016;
unsigned int var_30 = 210067184U;
unsigned int var_31 = 3230542118U;
long long int arr_0 [10] [10] ;
short arr_1 [10] [10] ;
unsigned int arr_3 [10] ;
unsigned short arr_5 [10] [10] ;
long long int arr_6 [10] ;
unsigned short arr_7 [10] [10] [10] [10] ;
short arr_12 [11] ;
long long int arr_13 [11] [11] ;
int arr_14 [11] [11] ;
long long int arr_15 [11] ;
signed char arr_22 [18] [18] ;
long long int arr_25 [18] ;
unsigned long long int arr_8 [10] [10] [10] [10] ;
long long int arr_11 [10] ;
unsigned char arr_16 [11] [11] [11] ;
unsigned int arr_20 [11] ;
signed char arr_21 [11] ;
unsigned int arr_26 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 2984420709710352489LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)9222;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 239668627U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)26178;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -5491522264384069831LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)1811;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (short)-20294;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = 8704520085115469977LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = -1829158625;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 5846976735023472756LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = -2713679005918295254LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 9109374519411739745ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 2396025868935367570LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = 1798734048U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = 3074026451U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
