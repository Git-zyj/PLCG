#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
signed char var_3 = (signed char)55;
int zero = 0;
long long int var_14 = 3219415313867840693LL;
long long int var_15 = -2660767219902267854LL;
short var_16 = (short)-21478;
unsigned long long int var_17 = 1419568758974205076ULL;
unsigned char var_18 = (unsigned char)22;
unsigned long long int var_19 = 13300212256502524998ULL;
unsigned char var_20 = (unsigned char)195;
unsigned long long int var_21 = 11807341600218467528ULL;
short arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned long long int arr_2 [10] [10] ;
long long int arr_4 [16] ;
unsigned long long int arr_5 [16] [16] ;
_Bool arr_6 [16] ;
unsigned long long int arr_8 [16] [16] [16] ;
long long int arr_9 [16] ;
unsigned long long int arr_11 [16] [16] ;
long long int arr_12 [16] ;
unsigned long long int arr_13 [16] [16] [16] ;
short arr_14 [23] ;
short arr_15 [23] ;
unsigned int arr_7 [16] ;
_Bool arr_16 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)12209;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 11687002017840494194ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 7534844589273993568LL : -3004115898670579697LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 8106890035339061748ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2331153441426503315ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = -4475314340308337609LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 7685382730615116503ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 1758126925838648200LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 14346230551259617383ULL : 11842616377449016100ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-14271 : (short)-15929;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (short)-16712;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 490112856U : 2427170842U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
