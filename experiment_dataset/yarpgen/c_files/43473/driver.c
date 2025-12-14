#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6928;
unsigned char var_1 = (unsigned char)213;
int var_2 = -1432890277;
int var_4 = -118888692;
long long int var_6 = 3449949464687566415LL;
unsigned char var_7 = (unsigned char)251;
unsigned char var_8 = (unsigned char)250;
unsigned long long int var_10 = 7972180929527913377ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-27531;
unsigned char var_15 = (unsigned char)50;
unsigned long long int arr_0 [22] ;
unsigned int arr_2 [22] [22] ;
int arr_4 [22] [22] ;
unsigned long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 12020306234587822664ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 3297263205U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 943526567;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 10372230278932983005ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
