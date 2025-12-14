#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
unsigned int var_1 = 3103273872U;
unsigned long long int var_2 = 12714835245838367017ULL;
unsigned int var_3 = 2518231275U;
unsigned char var_5 = (unsigned char)11;
signed char var_6 = (signed char)121;
long long int var_8 = 238205388915202319LL;
unsigned int var_9 = 2094309158U;
long long int var_10 = -7066569276986532863LL;
long long int var_12 = -3245772716930601085LL;
int var_13 = -1603561318;
int zero = 0;
signed char var_14 = (signed char)-87;
unsigned char var_15 = (unsigned char)102;
unsigned int var_16 = 2189741299U;
unsigned long long int var_17 = 2620107810910553050ULL;
signed char var_18 = (signed char)83;
long long int var_19 = 5479480274926061762LL;
unsigned int arr_0 [23] ;
unsigned short arr_2 [23] ;
signed char arr_3 [23] [23] [23] ;
unsigned char arr_6 [23] [23] [23] ;
_Bool arr_8 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2835662714U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50125 : (unsigned short)49460;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
