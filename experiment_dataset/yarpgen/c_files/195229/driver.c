#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7320721663265379275ULL;
short var_1 = (short)6900;
unsigned int var_2 = 3167798482U;
short var_3 = (short)9559;
unsigned short var_4 = (unsigned short)40949;
int var_5 = 2038860373;
signed char var_7 = (signed char)44;
short var_9 = (short)-4851;
unsigned short var_10 = (unsigned short)46838;
int zero = 0;
long long int var_11 = 1979362868114774880LL;
signed char var_12 = (signed char)17;
unsigned long long int var_13 = 5558691544577366086ULL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-17251;
int var_16 = 1507656649;
short var_17 = (short)17747;
unsigned int var_18 = 2692061488U;
int var_19 = -46838281;
unsigned short var_20 = (unsigned short)12747;
long long int var_21 = -7994446560141401418LL;
_Bool arr_0 [22] ;
signed char arr_3 [22] [22] [22] ;
short arr_4 [22] [22] [22] [22] ;
signed char arr_5 [22] ;
unsigned long long int arr_7 [10] ;
int arr_13 [17] ;
signed char arr_14 [17] [17] ;
unsigned short arr_16 [17] [17] ;
_Bool arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)20 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (short)10439;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 8770634333978813774ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 918065829;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)112 : (signed char)59;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)51034;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
