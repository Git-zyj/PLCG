#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2375392559U;
unsigned char var_3 = (unsigned char)115;
short var_5 = (short)16796;
unsigned long long int var_6 = 15151869944116847177ULL;
unsigned short var_8 = (unsigned short)30790;
unsigned int var_13 = 3005725605U;
unsigned short var_16 = (unsigned short)51378;
unsigned int var_19 = 3329467296U;
int zero = 0;
unsigned int var_20 = 1873606451U;
signed char var_21 = (signed char)-27;
unsigned long long int var_22 = 10092629672477329378ULL;
unsigned long long int var_23 = 16742132976259468576ULL;
unsigned int var_24 = 20930295U;
signed char var_25 = (signed char)14;
signed char var_26 = (signed char)-122;
unsigned int arr_0 [14] ;
int arr_1 [14] ;
_Bool arr_4 [23] [23] [23] ;
unsigned long long int arr_5 [23] [23] [23] ;
long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2306186786U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1002976656 : -1163508563;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8594718274371700112ULL : 426711696817165463ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -984638336943198531LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
