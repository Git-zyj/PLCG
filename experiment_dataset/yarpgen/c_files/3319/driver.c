#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1841066948U;
long long int var_3 = -257992755869216424LL;
unsigned int var_4 = 2147173187U;
unsigned int var_5 = 139042906U;
long long int var_11 = 485022740928920170LL;
short var_12 = (short)-11705;
short var_16 = (short)23324;
int zero = 0;
long long int var_17 = -5418832763909827825LL;
long long int var_18 = 8061921216436500651LL;
unsigned char var_19 = (unsigned char)239;
long long int var_20 = -5498752846715036709LL;
short var_21 = (short)3553;
unsigned int var_22 = 1704759941U;
unsigned int var_23 = 3928425208U;
short arr_0 [16] ;
short arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
unsigned int arr_4 [17] ;
unsigned char arr_5 [17] ;
short arr_7 [23] ;
unsigned int arr_3 [16] ;
unsigned int arr_9 [23] [23] ;
unsigned char arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-8589;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-28768;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 988863934U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)15890;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 3931826479U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 3870480524U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)129;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
