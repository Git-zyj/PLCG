#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 921609791;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)64961;
unsigned int var_4 = 2260069122U;
unsigned long long int var_5 = 10423296917851007391ULL;
short var_6 = (short)929;
short var_7 = (short)1206;
signed char var_8 = (signed char)-124;
signed char var_10 = (signed char)35;
unsigned char var_11 = (unsigned char)208;
unsigned long long int var_12 = 8401715009718987649ULL;
short var_13 = (short)-14282;
short var_14 = (short)4985;
short var_16 = (short)27843;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = 3016574087084180949LL;
unsigned short var_19 = (unsigned short)62024;
signed char var_20 = (signed char)115;
unsigned short var_21 = (unsigned short)57746;
unsigned long long int arr_0 [15] ;
long long int arr_1 [15] ;
int arr_2 [15] [15] [15] ;
short arr_4 [15] [15] [15] ;
int arr_5 [15] ;
signed char arr_6 [15] ;
short arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4415715508157883650ULL : 3197003138614756626ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -6566874626115920423LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -482000892;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)1922 : (short)-13525;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -281279950 : -603234797;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)97 : (signed char)3;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)29862 : (short)19884;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
