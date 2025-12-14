#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2810813232173687701ULL;
unsigned int var_8 = 3908436677U;
short var_16 = (short)-468;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)2824;
unsigned short var_20 = (unsigned short)29711;
long long int var_21 = 2881372291634825815LL;
int var_22 = 643779203;
long long int var_23 = 7686679525645626764LL;
unsigned long long int var_24 = 15897888325138643772ULL;
unsigned char var_25 = (unsigned char)223;
unsigned long long int arr_1 [11] [11] ;
unsigned long long int arr_2 [11] ;
signed char arr_4 [11] ;
unsigned short arr_11 [14] ;
unsigned char arr_13 [14] [14] ;
unsigned char arr_15 [14] ;
short arr_16 [14] [14] ;
signed char arr_17 [14] ;
unsigned long long int arr_3 [11] [11] ;
unsigned long long int arr_8 [11] ;
unsigned long long int arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 8033147087706335901ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 9820500557244988631ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned short)9642;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-24674;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 15498993714797544745ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 11273470927668221283ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 2942945813751753336ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
