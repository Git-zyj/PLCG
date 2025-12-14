#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3414738949U;
unsigned long long int var_7 = 13240620677586866991ULL;
int var_8 = -2046085842;
short var_13 = (short)-3901;
unsigned char var_14 = (unsigned char)129;
int zero = 0;
unsigned char var_15 = (unsigned char)87;
long long int var_16 = -1217914903258611605LL;
unsigned char var_17 = (unsigned char)255;
int var_18 = 47810912;
long long int var_19 = -4384230632231950997LL;
signed char var_20 = (signed char)-21;
int var_21 = -1337708601;
unsigned long long int var_22 = 10763450815225032501ULL;
unsigned int var_23 = 473696148U;
unsigned char var_24 = (unsigned char)129;
unsigned char var_25 = (unsigned char)50;
unsigned long long int var_26 = 3577009643601516560ULL;
long long int var_27 = -6516986509638491375LL;
long long int var_28 = 7749705443393299081LL;
int var_29 = -18965842;
unsigned short var_30 = (unsigned short)32156;
int var_31 = 354865243;
long long int var_32 = -7183003467402785739LL;
long long int var_33 = 8398318420098076566LL;
int arr_0 [24] [24] ;
long long int arr_1 [24] ;
long long int arr_3 [10] ;
unsigned long long int arr_5 [18] [18] ;
_Bool arr_6 [18] [18] ;
signed char arr_8 [18] [18] ;
_Bool arr_9 [18] [18] ;
unsigned short arr_10 [18] [18] [18] ;
signed char arr_11 [18] ;
_Bool arr_4 [10] ;
unsigned short arr_14 [18] [18] ;
unsigned short arr_15 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -1560770174;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 5615166009108026672LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 6722515453355219365LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 10751100973413778763ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)61 : (signed char)83;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)62017;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)32669;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)19905;
}

void checksum() {
    hash(&seed, var_15);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
