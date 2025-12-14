#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28134;
unsigned long long int var_1 = 10033299886885669042ULL;
unsigned int var_2 = 1404859541U;
unsigned long long int var_3 = 2763045909523093529ULL;
unsigned long long int var_5 = 16190657478162196371ULL;
unsigned int var_7 = 4291724009U;
long long int var_8 = -2068769914821276728LL;
short var_9 = (short)-11665;
unsigned short var_11 = (unsigned short)3873;
unsigned char var_12 = (unsigned char)131;
int zero = 0;
unsigned int var_13 = 2433200068U;
signed char var_14 = (signed char)-73;
long long int var_15 = 8475134024980721905LL;
unsigned int var_16 = 2210933604U;
short var_17 = (short)22094;
unsigned long long int var_18 = 11947781667110257030ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8185932676474733455LL;
unsigned long long int var_21 = 14715197910267364633ULL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -3568046910259182517LL;
unsigned long long int var_24 = 16601065199433613375ULL;
short var_25 = (short)30768;
unsigned long long int var_26 = 7554110446758523998ULL;
short var_27 = (short)-15324;
_Bool var_28 = (_Bool)1;
int var_29 = 1474341813;
unsigned char arr_0 [19] ;
_Bool arr_1 [19] [19] ;
long long int arr_2 [11] [11] ;
long long int arr_3 [11] ;
long long int arr_5 [15] ;
unsigned char arr_8 [15] ;
int arr_11 [15] [15] ;
unsigned int arr_14 [15] ;
unsigned long long int arr_17 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -5276915620376885903LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 3508078456776052772LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 4620470986837506047LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = -1538753043;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 718353457U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = 10001145537662090358ULL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
