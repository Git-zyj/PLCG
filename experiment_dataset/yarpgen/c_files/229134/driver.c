#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 16782143354175478612ULL;
int var_3 = -167374394;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-1;
unsigned long long int var_8 = 10957557843562950023ULL;
long long int var_11 = 2256385639263027764LL;
unsigned long long int var_12 = 15936792557374590272ULL;
unsigned short var_15 = (unsigned short)34825;
signed char var_17 = (signed char)50;
signed char var_19 = (signed char)-95;
int zero = 0;
unsigned char var_20 = (unsigned char)176;
unsigned long long int var_21 = 9985553544157261820ULL;
short var_22 = (short)22084;
long long int var_23 = 6238914382939522097LL;
unsigned char var_24 = (unsigned char)227;
unsigned long long int var_25 = 6480110062884759365ULL;
unsigned long long int var_26 = 4403150912389691064ULL;
int var_27 = 1902833904;
int arr_0 [12] [12] ;
unsigned short arr_1 [12] ;
int arr_2 [12] ;
int arr_3 [12] ;
unsigned char arr_8 [12] [12] [12] ;
unsigned short arr_11 [12] ;
_Bool arr_12 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 1252266321;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)1200;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1315277461;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -1336824328;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)26 : (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned short)21488;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
