#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2868501439149502454LL;
unsigned short var_3 = (unsigned short)59628;
signed char var_4 = (signed char)-21;
signed char var_5 = (signed char)98;
unsigned short var_8 = (unsigned short)24404;
unsigned char var_9 = (unsigned char)248;
long long int var_11 = -2267945493899897752LL;
signed char var_13 = (signed char)-18;
int zero = 0;
signed char var_14 = (signed char)-109;
signed char var_15 = (signed char)101;
unsigned char var_16 = (unsigned char)234;
long long int var_17 = 3415951406641506758LL;
signed char arr_1 [10] ;
signed char arr_2 [10] ;
unsigned char arr_4 [10] [10] ;
unsigned char arr_7 [10] [10] [10] ;
signed char arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-5;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
