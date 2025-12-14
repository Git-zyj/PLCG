#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3735044872U;
long long int var_1 = 3833283004402829093LL;
_Bool var_4 = (_Bool)0;
int var_5 = -1276664107;
unsigned short var_6 = (unsigned short)16813;
int var_7 = -463664391;
signed char var_8 = (signed char)31;
unsigned int var_9 = 1974662166U;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 1384732236;
int var_12 = 458059279;
unsigned char var_13 = (unsigned char)88;
unsigned short var_14 = (unsigned short)55668;
unsigned long long int var_15 = 2996413924262644056ULL;
unsigned int var_16 = 2773386431U;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)162;
unsigned short var_19 = (unsigned short)1843;
short var_20 = (short)-9559;
unsigned short arr_0 [16] ;
unsigned int arr_1 [16] ;
_Bool arr_2 [16] ;
unsigned short arr_5 [16] ;
signed char arr_7 [16] [16] [16] [16] ;
unsigned long long int arr_9 [11] ;
signed char arr_10 [11] [11] ;
short arr_3 [16] [16] ;
unsigned long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61880 : (unsigned short)16578;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1037290564U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)7053;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 368269283943373724ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-20439 : (short)-26224;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3669684831282763028ULL : 10674108394651883817ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
