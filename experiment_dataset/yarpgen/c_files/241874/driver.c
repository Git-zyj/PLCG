#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
signed char var_8 = (signed char)119;
long long int var_9 = 4917411153643875195LL;
unsigned int var_10 = 1372765608U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1648692489U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = 975324741290734422LL;
unsigned char var_18 = (unsigned char)141;
long long int var_19 = 78495823735444933LL;
int var_20 = 1713818737;
long long int var_21 = 4563939288431728132LL;
long long int var_22 = 4993398045884429871LL;
short arr_0 [21] [21] ;
_Bool arr_2 [21] ;
unsigned char arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
long long int arr_5 [16] ;
_Bool arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-23664;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)8288;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1608099125411368161LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
