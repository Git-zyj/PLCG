#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1994868688U;
unsigned short var_4 = (unsigned short)346;
unsigned short var_5 = (unsigned short)27784;
short var_6 = (short)-1701;
short var_8 = (short)2608;
unsigned short var_9 = (unsigned short)1884;
signed char var_14 = (signed char)23;
unsigned int var_15 = 1124482U;
int zero = 0;
unsigned long long int var_16 = 8127746655204455055ULL;
int var_17 = -672256999;
short var_18 = (short)-414;
unsigned char var_19 = (unsigned char)250;
signed char var_20 = (signed char)-98;
long long int var_21 = -8189048564845972543LL;
long long int var_22 = 2731986521269976016LL;
unsigned char var_23 = (unsigned char)88;
int var_24 = -723193942;
unsigned char var_25 = (unsigned char)136;
unsigned char arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned int arr_2 [19] ;
_Bool arr_3 [19] [19] ;
signed char arr_7 [19] [19] [19] [19] ;
_Bool arr_10 [17] ;
short arr_14 [17] ;
unsigned int arr_11 [17] ;
unsigned char arr_12 [17] ;
unsigned char arr_15 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3716358753500925227ULL : 9361073603755556949ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 472816812U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)7019 : (short)-5802;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1454052823U : 341360144U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)110 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)145 : (unsigned char)105;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
