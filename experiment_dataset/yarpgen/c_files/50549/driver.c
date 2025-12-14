#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5291448882018528403ULL;
unsigned long long int var_5 = 4935203565050145414ULL;
unsigned long long int var_11 = 14117414367639510865ULL;
signed char var_12 = (signed char)-52;
unsigned char var_13 = (unsigned char)19;
long long int var_14 = 3213864521883103049LL;
long long int var_16 = -125685755873068624LL;
int zero = 0;
signed char var_17 = (signed char)-66;
unsigned int var_18 = 249625695U;
long long int var_19 = 3752041776844900554LL;
unsigned char var_20 = (unsigned char)227;
unsigned char arr_0 [15] ;
unsigned short arr_1 [15] ;
long long int arr_3 [19] ;
unsigned char arr_2 [15] ;
signed char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)232 : (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)62620;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -9177986148898268401LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)-97;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
