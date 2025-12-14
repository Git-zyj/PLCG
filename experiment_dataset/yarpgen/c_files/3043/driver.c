#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8086802020413048222LL;
signed char var_5 = (signed char)90;
long long int var_6 = -5188709017182106175LL;
signed char var_7 = (signed char)-17;
long long int var_9 = -8027389331232651953LL;
int var_11 = -1468311287;
unsigned int var_12 = 328181794U;
unsigned char var_14 = (unsigned char)167;
long long int var_15 = -8840214395646422152LL;
int var_16 = -1748759346;
_Bool var_17 = (_Bool)0;
int var_18 = 1691913055;
int zero = 0;
unsigned int var_19 = 1561867728U;
unsigned short var_20 = (unsigned short)53228;
short var_21 = (short)-6898;
unsigned int var_22 = 2112608658U;
unsigned long long int var_23 = 4858973620143277207ULL;
unsigned short var_24 = (unsigned short)40551;
signed char var_25 = (signed char)-80;
long long int var_26 = -1155821404430500738LL;
long long int var_27 = -1538449946185642756LL;
unsigned short arr_3 [10] ;
signed char arr_5 [10] ;
unsigned int arr_8 [10] [10] [10] [10] [10] ;
unsigned int arr_12 [11] [11] ;
signed char arr_13 [11] ;
unsigned short arr_10 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)33092;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1238438196U : 1867103435U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = 2760884083U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)22182 : (unsigned short)27201;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
