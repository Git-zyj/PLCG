#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37150;
unsigned short var_5 = (unsigned short)17013;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)247;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-25781;
short var_12 = (short)-31946;
unsigned long long int var_13 = 4236760604865695079ULL;
long long int var_15 = 6274094886643129230LL;
int var_16 = 688008316;
int zero = 0;
unsigned int var_17 = 743203956U;
unsigned short var_18 = (unsigned short)44986;
unsigned char var_19 = (unsigned char)122;
unsigned long long int var_20 = 2196662285268679859ULL;
unsigned short var_21 = (unsigned short)57822;
unsigned long long int var_22 = 13881998499673215730ULL;
int var_23 = -1921216601;
unsigned char arr_0 [23] ;
_Bool arr_1 [23] ;
int arr_2 [23] [23] ;
short arr_3 [23] [23] [23] ;
short arr_4 [23] ;
signed char arr_5 [23] [23] [23] ;
unsigned char arr_6 [23] [23] [23] ;
_Bool arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 780357090;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)25433;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-2479;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
