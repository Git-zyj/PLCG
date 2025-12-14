#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6800524146117375277LL;
long long int var_6 = -414959189755845193LL;
long long int var_9 = -2546465199892573043LL;
int zero = 0;
long long int var_12 = -2182366210604550698LL;
long long int var_13 = -6045738187043727254LL;
unsigned char var_14 = (unsigned char)235;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)180;
unsigned int var_17 = 835398398U;
unsigned short var_18 = (unsigned short)19781;
unsigned int var_19 = 3153275285U;
long long int var_20 = -3820864563119199682LL;
signed char var_21 = (signed char)62;
unsigned int var_22 = 3841867277U;
signed char arr_1 [17] [17] ;
int arr_10 [24] ;
_Bool arr_4 [17] ;
unsigned char arr_8 [23] ;
unsigned short arr_19 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -100805430;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)17882;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
