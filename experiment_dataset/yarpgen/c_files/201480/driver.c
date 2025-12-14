#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7864243311454827684ULL;
short var_2 = (short)16404;
long long int var_3 = 643390443890057540LL;
int var_4 = -884974711;
unsigned short var_6 = (unsigned short)14564;
int var_7 = -1133056709;
unsigned long long int var_9 = 2263896845960542119ULL;
unsigned int var_12 = 100094787U;
short var_14 = (short)30144;
int zero = 0;
unsigned char var_15 = (unsigned char)69;
long long int var_16 = -3987378282928905826LL;
unsigned short var_17 = (unsigned short)31994;
signed char var_18 = (signed char)-89;
unsigned long long int var_19 = 6446266936518618021ULL;
unsigned short var_20 = (unsigned short)58486;
int var_21 = -881235911;
unsigned int var_22 = 2679490098U;
unsigned short var_23 = (unsigned short)18768;
long long int arr_0 [15] ;
unsigned char arr_3 [15] [15] ;
int arr_7 [15] [15] [15] [15] ;
long long int arr_9 [15] [15] [15] ;
unsigned long long int arr_10 [15] [15] [15] ;
unsigned short arr_16 [15] ;
unsigned char arr_18 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2973023938563940877LL : 2268412351705496230LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 106673698;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5468050432538884983LL : 346161304823434233LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 14433730146945685294ULL : 15701776256341340139ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30913 : (unsigned short)1763;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)187 : (unsigned char)133;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
