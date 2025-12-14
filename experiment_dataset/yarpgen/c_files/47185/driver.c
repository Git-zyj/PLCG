#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12952747212578260517ULL;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)5;
_Bool var_5 = (_Bool)1;
long long int var_7 = 4480680709051037126LL;
unsigned long long int var_8 = 6101311021700183296ULL;
signed char var_9 = (signed char)-43;
unsigned char var_10 = (unsigned char)131;
unsigned char var_12 = (unsigned char)73;
int zero = 0;
unsigned int var_13 = 1382857244U;
long long int var_14 = -5233251628790646807LL;
unsigned long long int var_15 = 17781752546695291106ULL;
short var_16 = (short)-10365;
unsigned char var_17 = (unsigned char)219;
unsigned char arr_0 [20] [20] ;
unsigned long long int arr_2 [20] [20] [20] ;
unsigned char arr_4 [20] ;
int arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 16878300298859004358ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -870851623;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
