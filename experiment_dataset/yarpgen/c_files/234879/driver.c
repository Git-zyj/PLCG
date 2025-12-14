#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17663857802379827822ULL;
unsigned short var_3 = (unsigned short)1726;
long long int var_4 = -7006959458185472234LL;
unsigned int var_6 = 1443253589U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 556194468U;
_Bool var_12 = (_Bool)1;
long long int var_14 = 4026146320252086184LL;
short var_15 = (short)-7596;
unsigned short var_18 = (unsigned short)59382;
int zero = 0;
unsigned char var_20 = (unsigned char)72;
unsigned char var_21 = (unsigned char)198;
unsigned char var_22 = (unsigned char)93;
long long int var_23 = -5101974352854979628LL;
long long int var_24 = 3652247814333417733LL;
short var_25 = (short)4905;
_Bool var_26 = (_Bool)1;
long long int var_27 = -4830898236372511522LL;
unsigned int var_28 = 1282216022U;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)119;
unsigned long long int arr_0 [17] ;
_Bool arr_1 [17] [17] ;
unsigned char arr_3 [17] [17] [17] ;
long long int arr_4 [17] ;
unsigned short arr_5 [17] ;
unsigned short arr_8 [17] [17] ;
int arr_6 [17] [17] [17] ;
unsigned int arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 9453565822432964799ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 3295590461010113331LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)47015;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)55342;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -612414572;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 2024373152U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
