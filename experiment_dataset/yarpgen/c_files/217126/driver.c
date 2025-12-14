#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-81;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2473286511U;
int var_9 = -1074745027;
unsigned short var_10 = (unsigned short)46221;
unsigned int var_11 = 4275237302U;
int zero = 0;
long long int var_12 = 690867551251482771LL;
int var_13 = 1499376216;
int var_14 = 1332075972;
signed char var_15 = (signed char)0;
unsigned char var_16 = (unsigned char)234;
long long int var_17 = 1702945795453834120LL;
_Bool var_18 = (_Bool)1;
int var_19 = 1078719991;
signed char arr_0 [11] ;
short arr_1 [11] ;
unsigned char arr_3 [11] ;
unsigned short arr_4 [11] ;
unsigned char arr_5 [11] ;
unsigned int arr_2 [11] ;
unsigned long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-19220;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23345 : (unsigned short)7413;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)246 : (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1514077416U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 15776084371200166762ULL : 10605793045486258863ULL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
