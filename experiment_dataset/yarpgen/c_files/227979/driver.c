#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-57;
int var_12 = -1084018872;
unsigned char var_14 = (unsigned char)30;
int zero = 0;
unsigned char var_17 = (unsigned char)126;
unsigned short var_18 = (unsigned short)22892;
int var_19 = -906133066;
unsigned long long int var_20 = 18312684456200204418ULL;
unsigned char var_21 = (unsigned char)214;
unsigned short var_22 = (unsigned short)29216;
int var_23 = 929549631;
long long int var_24 = -6640615917387525126LL;
unsigned int var_25 = 1789805818U;
_Bool var_26 = (_Bool)1;
short arr_0 [14] ;
int arr_1 [14] ;
unsigned char arr_3 [10] ;
int arr_9 [23] ;
unsigned char arr_2 [14] [14] ;
long long int arr_5 [10] ;
unsigned short arr_12 [23] ;
unsigned int arr_16 [22] ;
long long int arr_23 [12] [12] [12] ;
_Bool arr_24 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-4434;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -1190540190;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 1045161226;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -1612695859051633090LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)49475;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1347722928U : 1824181375U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6585119984670106350LL : -1193911901914329798LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
