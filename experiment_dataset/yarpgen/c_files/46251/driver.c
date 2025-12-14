#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9749082027859094380ULL;
unsigned short var_7 = (unsigned short)42947;
unsigned int var_8 = 3555091869U;
int var_11 = 1444422299;
unsigned int var_13 = 1266120745U;
signed char var_14 = (signed char)-123;
unsigned char var_15 = (unsigned char)229;
int var_17 = -1669667597;
unsigned long long int var_19 = 6297875705798533055ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 6741204931743425614ULL;
unsigned long long int var_22 = 8986727242556536716ULL;
unsigned long long int var_23 = 9404466549526178159ULL;
unsigned short arr_1 [22] [22] ;
long long int arr_2 [22] ;
unsigned int arr_3 [22] ;
unsigned char arr_4 [22] ;
long long int arr_5 [22] ;
long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)26878;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3738248462507733243LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1746601058U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 6052665315489004865LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -4665312716498206466LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
