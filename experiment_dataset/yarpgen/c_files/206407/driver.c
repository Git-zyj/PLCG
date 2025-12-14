#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)86;
_Bool var_5 = (_Bool)1;
int var_9 = 1390036948;
int var_11 = 1538401797;
int zero = 0;
int var_12 = -1050077574;
unsigned char var_13 = (unsigned char)118;
short var_14 = (short)-14698;
unsigned int var_15 = 2525249013U;
long long int var_16 = 1877869867907324829LL;
unsigned char var_17 = (unsigned char)155;
int var_18 = -1982619883;
short arr_0 [12] [12] ;
unsigned short arr_1 [12] ;
unsigned long long int arr_3 [23] ;
unsigned short arr_2 [12] [12] ;
unsigned char arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-4862;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)45031;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 8790796842533404935ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)43742 : (unsigned short)10820;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned char)54;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
