#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8636;
unsigned int var_2 = 1966781827U;
unsigned char var_3 = (unsigned char)228;
short var_4 = (short)-15818;
signed char var_6 = (signed char)115;
unsigned char var_8 = (unsigned char)177;
unsigned char var_9 = (unsigned char)242;
int var_11 = 2141483495;
int zero = 0;
unsigned short var_12 = (unsigned short)33453;
unsigned int var_13 = 3308817518U;
unsigned short var_14 = (unsigned short)4941;
unsigned long long int var_15 = 718378696675155091ULL;
unsigned char var_16 = (unsigned char)193;
long long int var_17 = -196059469360999968LL;
unsigned char var_18 = (unsigned char)41;
long long int var_19 = 2039883927070569482LL;
unsigned short var_20 = (unsigned short)28755;
short var_21 = (short)-28081;
signed char var_22 = (signed char)61;
unsigned long long int var_23 = 7464647727865130356ULL;
unsigned char arr_0 [11] ;
int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
signed char arr_5 [11] ;
int arr_8 [11] ;
signed char arr_9 [11] ;
unsigned char arr_10 [11] [11] [11] ;
unsigned short arr_14 [11] [11] [11] [11] [11] ;
unsigned char arr_3 [11] ;
unsigned char arr_6 [11] ;
int arr_15 [11] [11] [11] ;
unsigned char arr_18 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 306753001;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 16631338135224411525ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 494173818;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)36070;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1845543772;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned char)143 : (unsigned char)182;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
