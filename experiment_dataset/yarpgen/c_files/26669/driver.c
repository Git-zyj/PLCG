#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
short var_5 = (short)-4640;
short var_8 = (short)-23363;
unsigned int var_9 = 2171110700U;
int zero = 0;
signed char var_10 = (signed char)22;
int var_11 = 206117611;
unsigned char var_12 = (unsigned char)122;
unsigned short var_13 = (unsigned short)17878;
unsigned char var_14 = (unsigned char)72;
unsigned int var_15 = 1364373148U;
unsigned char var_16 = (unsigned char)0;
short var_17 = (short)-13000;
unsigned int arr_0 [11] [11] ;
long long int arr_1 [11] ;
unsigned int arr_2 [11] [11] ;
int arr_3 [23] ;
int arr_4 [23] ;
signed char arr_5 [23] ;
unsigned short arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1595758429U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1325340698605734845LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1333734722U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 799970928 : -1718626128;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -1874520105;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)-124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)60798 : (unsigned short)50128;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
