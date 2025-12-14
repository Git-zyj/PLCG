#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1901264739U;
long long int var_5 = -7930031523413363271LL;
int var_7 = -1766979886;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)157;
int var_12 = -1101731049;
unsigned long long int var_16 = 5927573624030446866ULL;
int zero = 0;
long long int var_17 = 8722214653058697663LL;
unsigned char var_18 = (unsigned char)216;
unsigned int var_19 = 4050987874U;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8598938958129346675LL;
_Bool var_22 = (_Bool)0;
_Bool arr_3 [12] ;
int arr_4 [12] ;
unsigned short arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1441918427;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)41784;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
