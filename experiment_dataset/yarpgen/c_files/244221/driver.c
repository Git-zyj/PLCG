#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned long long int var_1 = 10378117751245350036ULL;
signed char var_2 = (signed char)95;
unsigned int var_3 = 1906904596U;
unsigned int var_4 = 2147276957U;
unsigned char var_5 = (unsigned char)128;
short var_6 = (short)10132;
unsigned long long int var_7 = 16309010757622805557ULL;
unsigned long long int var_8 = 6179038091747117801ULL;
int var_9 = -740084690;
unsigned int var_10 = 997999813U;
short var_11 = (short)-10816;
int zero = 0;
unsigned short var_12 = (unsigned short)34022;
long long int var_13 = -4236672890189672119LL;
unsigned short var_14 = (unsigned short)6143;
long long int var_15 = -6934287922238553260LL;
unsigned long long int var_16 = 1490593633761592723ULL;
unsigned long long int var_17 = 6507903380524549830ULL;
signed char var_18 = (signed char)34;
unsigned long long int var_19 = 3887684567295018890ULL;
signed char var_20 = (signed char)97;
int var_21 = 1984027162;
unsigned long long int var_22 = 5205278074228590720ULL;
unsigned char var_23 = (unsigned char)168;
unsigned int arr_4 [16] [16] [16] ;
unsigned long long int arr_5 [16] ;
unsigned long long int arr_9 [23] ;
unsigned short arr_12 [23] ;
_Bool arr_13 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1770645365U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 17198457204367604293ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 989648321622475123ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)53824;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
