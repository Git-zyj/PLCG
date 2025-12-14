#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
unsigned char var_2 = (unsigned char)205;
unsigned int var_3 = 3673549366U;
long long int var_9 = -9221951041433557528LL;
long long int var_10 = -6528626917995473159LL;
unsigned short var_13 = (unsigned short)8169;
int zero = 0;
unsigned int var_14 = 4258311023U;
unsigned char var_15 = (unsigned char)171;
unsigned int var_16 = 1156748219U;
long long int var_17 = 2533768340655763325LL;
long long int var_18 = 9046555892360189213LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)9345;
unsigned char var_21 = (unsigned char)250;
_Bool var_22 = (_Bool)0;
unsigned short arr_5 [22] ;
unsigned char arr_9 [16] ;
unsigned int arr_10 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)49208;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 1974216426U;
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
