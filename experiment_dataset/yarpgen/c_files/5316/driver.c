#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
unsigned char var_2 = (unsigned char)127;
int var_4 = 946230582;
int var_5 = 752924434;
long long int var_6 = 6570511300487797890LL;
unsigned long long int var_7 = 6665986620993809200ULL;
short var_8 = (short)7087;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2914786565U;
unsigned short var_11 = (unsigned short)57119;
long long int var_12 = 256947711645242721LL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)119;
unsigned long long int var_15 = 8062222063524237281ULL;
unsigned int var_16 = 2755927302U;
int zero = 0;
int var_17 = 311170172;
unsigned int var_18 = 3259286619U;
short var_19 = (short)8177;
signed char var_20 = (signed char)89;
_Bool var_21 = (_Bool)1;
long long int var_22 = -8317431983526265046LL;
signed char var_23 = (signed char)64;
short arr_0 [10] ;
short arr_1 [10] ;
long long int arr_2 [10] [10] ;
int arr_3 [10] ;
long long int arr_7 [10] ;
short arr_4 [10] ;
unsigned short arr_5 [10] ;
short arr_6 [10] ;
unsigned long long int arr_10 [10] [10] ;
signed char arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)16356;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-30412;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 2969116030466120028LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2315430;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -4693700117011171166LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)4199;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)45422;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)-26149;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 13466733760160177600ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (signed char)96;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
