#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)85;
unsigned short var_4 = (unsigned short)56525;
unsigned short var_5 = (unsigned short)9415;
signed char var_6 = (signed char)123;
signed char var_7 = (signed char)-88;
int var_9 = 2042758744;
unsigned char var_10 = (unsigned char)119;
signed char var_13 = (signed char)-85;
int zero = 0;
unsigned char var_14 = (unsigned char)129;
unsigned char var_15 = (unsigned char)2;
_Bool var_16 = (_Bool)1;
int var_17 = 1015136007;
unsigned short arr_0 [18] ;
unsigned long long int arr_1 [18] ;
_Bool arr_3 [18] [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)62858;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 14740052143130750007ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7750951603409684953ULL : 13024235840546840386ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
