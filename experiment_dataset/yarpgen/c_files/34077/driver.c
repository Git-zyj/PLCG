#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -179601526;
int var_1 = 1478921119;
unsigned long long int var_2 = 9389344044085547186ULL;
short var_3 = (short)-31020;
int var_4 = 999100624;
signed char var_6 = (signed char)40;
signed char var_7 = (signed char)-32;
unsigned int var_9 = 1196016088U;
unsigned short var_10 = (unsigned short)46267;
signed char var_12 = (signed char)71;
int zero = 0;
unsigned int var_13 = 3970623770U;
unsigned long long int var_14 = 2421639730490311539ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 524477896U;
unsigned long long int var_17 = 556968400871932284ULL;
unsigned int var_18 = 3456205360U;
short var_19 = (short)21304;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 12896683782645863276ULL;
int arr_0 [23] ;
int arr_1 [23] ;
short arr_2 [23] [23] ;
unsigned char arr_3 [23] [23] [23] ;
unsigned long long int arr_4 [23] ;
unsigned char arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -1604125717;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1644081424;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-23453;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 6151225159575140312ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned char)32;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
