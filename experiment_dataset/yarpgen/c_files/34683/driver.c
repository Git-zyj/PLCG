#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
short var_2 = (short)-30482;
unsigned int var_3 = 2083284816U;
short var_4 = (short)-2297;
int var_6 = -364622502;
unsigned char var_9 = (unsigned char)115;
unsigned short var_10 = (unsigned short)8022;
unsigned char var_11 = (unsigned char)156;
short var_13 = (short)1129;
unsigned long long int var_14 = 4300228295817669538ULL;
unsigned long long int var_18 = 14118611822478890770ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)60872;
unsigned long long int var_20 = 12531723109031554387ULL;
short var_21 = (short)17329;
unsigned int var_22 = 2295776788U;
long long int var_23 = -2095433434261073898LL;
unsigned char var_24 = (unsigned char)119;
short var_25 = (short)-10983;
unsigned char var_26 = (unsigned char)49;
unsigned char var_27 = (unsigned char)73;
unsigned char var_28 = (unsigned char)21;
unsigned long long int arr_0 [11] ;
unsigned char arr_1 [11] [11] ;
short arr_6 [10] ;
short arr_7 [10] ;
unsigned int arr_9 [10] ;
int arr_12 [23] ;
unsigned int arr_13 [23] ;
unsigned long long int arr_2 [11] ;
short arr_3 [11] ;
unsigned char arr_4 [11] ;
unsigned int arr_5 [11] ;
unsigned char arr_8 [10] ;
unsigned long long int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3846962435107542775ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)-25578;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)-1600;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2197769098U : 2191103309U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 1297691674;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 146093396U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 9555754158945777795ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-17696;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 2865279200U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)183 : (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2629177445269612681ULL : 14577330585130594774ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
