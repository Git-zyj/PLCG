#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5898254181844657174ULL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)97;
long long int var_3 = -8295816096748778438LL;
short var_4 = (short)-18538;
_Bool var_5 = (_Bool)1;
long long int var_6 = -7888614897409165877LL;
unsigned char var_7 = (unsigned char)161;
int var_8 = -1314352346;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)250;
signed char var_11 = (signed char)-19;
unsigned char var_12 = (unsigned char)253;
long long int var_13 = -6900805074063387651LL;
int var_14 = -1919090675;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
short var_17 = (short)24078;
short var_18 = (short)-28627;
int zero = 0;
signed char var_19 = (signed char)94;
int var_20 = -1087481512;
signed char var_21 = (signed char)53;
unsigned int var_22 = 1946697098U;
int var_23 = 775980923;
short var_24 = (short)17560;
unsigned char var_25 = (unsigned char)113;
unsigned long long int var_26 = 15344355769224214051ULL;
unsigned long long int var_27 = 5459462180704480898ULL;
unsigned int var_28 = 4268383159U;
int var_29 = -112791490;
unsigned short var_30 = (unsigned short)36725;
unsigned long long int var_31 = 4175056811670240334ULL;
unsigned int var_32 = 2915895166U;
signed char arr_1 [10] ;
unsigned long long int arr_3 [10] [10] [10] ;
unsigned long long int arr_5 [10] ;
_Bool arr_8 [10] ;
int arr_9 [10] ;
unsigned short arr_11 [10] [10] [10] [10] [10] [10] ;
int arr_2 [10] ;
short arr_7 [10] ;
unsigned int arr_14 [10] [10] [10] [10] ;
int arr_15 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 6898720694414204444ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 14785034368206041792ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = -1356193171;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)20232;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -329552174;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)-23160;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2156923411U : 2265838676U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -331445441 : 1875212116;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
