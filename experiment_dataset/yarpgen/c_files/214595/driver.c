#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3144549923U;
long long int var_4 = 2085007040566784534LL;
short var_6 = (short)3104;
long long int var_8 = -3710434916872128167LL;
int var_10 = 850995133;
long long int var_11 = 709879931070119460LL;
unsigned long long int var_12 = 6250816528521967847ULL;
short var_13 = (short)29720;
short var_14 = (short)1061;
long long int var_16 = -5318205012131958990LL;
int zero = 0;
signed char var_17 = (signed char)-125;
unsigned long long int var_18 = 9247040064591994711ULL;
int var_19 = -1503208404;
short var_20 = (short)14112;
short var_21 = (short)-15669;
unsigned long long int var_22 = 10548097849719967853ULL;
int var_23 = 128863286;
unsigned char var_24 = (unsigned char)164;
unsigned char var_25 = (unsigned char)78;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-51;
_Bool var_28 = (_Bool)1;
long long int arr_0 [11] [11] ;
int arr_8 [23] ;
signed char arr_4 [11] ;
_Bool arr_28 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -3487141249788889078LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1915075733 : 1003963373;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)104 : (signed char)12;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
