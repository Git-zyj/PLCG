#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7728155975154497763LL;
unsigned char var_1 = (unsigned char)144;
unsigned int var_2 = 1366479654U;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-7370;
short var_7 = (short)22765;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_11 = 2009853270091382160LL;
short var_12 = (short)-4045;
long long int var_13 = -1054090317232027286LL;
unsigned short var_14 = (unsigned short)55532;
unsigned long long int var_15 = 4084129841314113348ULL;
unsigned char var_16 = (unsigned char)46;
unsigned long long int arr_0 [12] ;
long long int arr_1 [12] ;
_Bool arr_2 [12] ;
short arr_3 [12] ;
unsigned long long int arr_4 [12] ;
unsigned long long int arr_5 [12] ;
unsigned char arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 13221530369648162974ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3983510837660297225LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)27476;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 11454101675135347455ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 17971236095787452672ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)245;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
