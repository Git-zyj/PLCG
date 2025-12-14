#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2003449646;
unsigned char var_1 = (unsigned char)117;
unsigned long long int var_2 = 2553882695409418819ULL;
unsigned long long int var_3 = 4662886482606460718ULL;
long long int var_4 = -8374515635416183084LL;
unsigned long long int var_5 = 12080374293852022622ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 11813253861205337992ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -414252832400310907LL;
int zero = 0;
unsigned int var_11 = 2672238516U;
unsigned char var_12 = (unsigned char)201;
unsigned long long int var_13 = 4308026936405281810ULL;
short var_14 = (short)17101;
int var_15 = 1667931686;
long long int var_16 = 9044710098331204949LL;
unsigned char var_17 = (unsigned char)70;
unsigned int var_18 = 456482565U;
unsigned int var_19 = 2971549606U;
short var_20 = (short)-10952;
unsigned int var_21 = 3660206886U;
short var_22 = (short)25590;
unsigned short var_23 = (unsigned short)54133;
int arr_2 [21] ;
unsigned long long int arr_5 [21] [21] ;
unsigned short arr_19 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1989013312 : 1101686884;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 18003937198559146620ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)41024 : (unsigned short)34504;
}

void checksum() {
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
