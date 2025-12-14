#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 154329568;
unsigned short var_2 = (unsigned short)1439;
unsigned int var_3 = 3475952604U;
unsigned short var_5 = (unsigned short)14162;
short var_6 = (short)13119;
signed char var_7 = (signed char)-90;
unsigned int var_8 = 3135737061U;
unsigned long long int var_10 = 10561642722171962128ULL;
unsigned short var_13 = (unsigned short)28889;
unsigned int var_14 = 1117261445U;
int zero = 0;
signed char var_15 = (signed char)-120;
int var_16 = -1438153329;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-14745;
unsigned int var_19 = 2567923904U;
unsigned char var_20 = (unsigned char)11;
short arr_0 [21] ;
int arr_3 [21] ;
unsigned int arr_7 [21] ;
signed char arr_9 [21] [21] [21] ;
int arr_10 [21] ;
_Bool arr_5 [21] [21] ;
signed char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-8121;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1104273152;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 1358532827U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = -818965669;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)108;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
