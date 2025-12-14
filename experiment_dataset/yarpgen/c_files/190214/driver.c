#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
signed char var_1 = (signed char)-49;
signed char var_3 = (signed char)109;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)42230;
unsigned short var_10 = (unsigned short)26707;
signed char var_11 = (signed char)-25;
unsigned long long int var_12 = 16807225084692204611ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)235;
signed char var_14 = (signed char)114;
unsigned long long int var_15 = 16178565333317552331ULL;
unsigned long long int var_16 = 11067055750663050804ULL;
unsigned short var_17 = (unsigned short)36048;
unsigned int var_18 = 3145434256U;
short var_19 = (short)-30167;
unsigned long long int var_20 = 18054822900111716469ULL;
short var_21 = (short)18695;
unsigned short var_22 = (unsigned short)61614;
unsigned int var_23 = 2050398090U;
unsigned char var_24 = (unsigned char)15;
unsigned short arr_5 [18] [18] [18] ;
long long int arr_7 [20] ;
unsigned int arr_8 [20] ;
unsigned short arr_11 [22] ;
unsigned char arr_12 [22] ;
int arr_14 [22] ;
_Bool arr_15 [22] [22] ;
unsigned int arr_16 [22] ;
unsigned short arr_17 [22] [22] ;
int arr_18 [22] [22] [22] [22] ;
long long int arr_2 [18] [18] ;
unsigned long long int arr_6 [18] ;
unsigned long long int arr_9 [20] ;
unsigned char arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)14268;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 8027941151738005350LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 2484202593U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)4164;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = -1344898179;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 336261994U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)53509;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 272883209;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 1342225801611090169LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 17100761970964057618ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 14172339099464212455ULL : 18307246018582142924ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned char)234;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
