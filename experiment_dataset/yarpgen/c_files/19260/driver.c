#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9286664341791342254ULL;
unsigned int var_1 = 1014729053U;
unsigned int var_2 = 1656586611U;
unsigned short var_5 = (unsigned short)22737;
unsigned int var_9 = 1771879911U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)18925;
unsigned int var_14 = 1843000837U;
int zero = 0;
unsigned short var_15 = (unsigned short)60372;
unsigned short var_16 = (unsigned short)36581;
unsigned short var_17 = (unsigned short)44347;
unsigned short var_18 = (unsigned short)47410;
unsigned int var_19 = 1264245423U;
unsigned short var_20 = (unsigned short)56690;
unsigned char var_21 = (unsigned char)76;
unsigned int var_22 = 2605556180U;
_Bool var_23 = (_Bool)1;
short var_24 = (short)6557;
unsigned short var_25 = (unsigned short)50336;
unsigned int var_26 = 2247445819U;
short arr_0 [11] [11] ;
int arr_1 [11] ;
_Bool arr_3 [11] [11] ;
unsigned short arr_4 [11] [11] ;
unsigned short arr_9 [11] ;
unsigned int arr_10 [11] [11] [11] ;
unsigned int arr_11 [11] [11] [11] [11] ;
int arr_15 [11] [11] [11] [11] ;
_Bool arr_2 [11] ;
unsigned short arr_13 [11] ;
unsigned long long int arr_17 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)22047;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1901006165;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)56476;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned short)55614;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2035840009U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 3627110683U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 280685070;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (unsigned short)53963;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 4490737954290133960ULL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
