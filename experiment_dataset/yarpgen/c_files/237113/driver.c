#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 215437192U;
long long int var_1 = -4997522261021194729LL;
short var_7 = (short)11392;
unsigned char var_9 = (unsigned char)33;
int zero = 0;
unsigned short var_14 = (unsigned short)3534;
unsigned char var_15 = (unsigned char)25;
unsigned char var_16 = (unsigned char)207;
unsigned long long int var_17 = 7512813698981307737ULL;
unsigned char var_18 = (unsigned char)26;
unsigned int var_19 = 2714416528U;
long long int var_20 = -4534400133674474438LL;
unsigned char var_21 = (unsigned char)109;
unsigned char arr_1 [11] ;
unsigned int arr_2 [11] ;
_Bool arr_3 [11] [11] ;
int arr_7 [11] [11] [11] ;
unsigned char arr_10 [11] ;
unsigned int arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 3513819130U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 12023213;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 2285116763U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
