#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 355175450926430249LL;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)14;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)119;
_Bool var_9 = (_Bool)1;
long long int var_10 = -4122208562179577630LL;
unsigned char var_13 = (unsigned char)17;
unsigned char var_15 = (unsigned char)180;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -3255713157761248040LL;
signed char var_19 = (signed char)-53;
signed char var_20 = (signed char)-59;
long long int var_21 = -320169440958180512LL;
signed char var_22 = (signed char)111;
unsigned char var_23 = (unsigned char)39;
_Bool var_24 = (_Bool)0;
unsigned char arr_0 [15] ;
long long int arr_1 [15] [15] ;
signed char arr_3 [11] ;
unsigned char arr_4 [11] [11] ;
signed char arr_5 [11] ;
long long int arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -8444380551733814380LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 7861237874069808705LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
