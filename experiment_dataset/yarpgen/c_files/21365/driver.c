#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 398006617304986275ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-30635;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 761826642U;
long long int var_10 = -6850221017072101989LL;
unsigned short var_11 = (unsigned short)48577;
unsigned long long int var_12 = 15025396628571592586ULL;
int zero = 0;
unsigned long long int var_13 = 16186673397490379147ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4771678984807413877LL;
unsigned long long int var_16 = 11509013248863434888ULL;
long long int var_17 = 4286070490866246528LL;
unsigned short var_18 = (unsigned short)1989;
long long int var_19 = 3128543243008393532LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)49431;
signed char var_22 = (signed char)-26;
_Bool var_23 = (_Bool)1;
long long int var_24 = -3038883562904750932LL;
unsigned short arr_0 [12] ;
long long int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
unsigned char arr_5 [18] ;
unsigned long long int arr_7 [18] [18] ;
unsigned long long int arr_8 [18] [18] ;
long long int arr_11 [18] [18] ;
signed char arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)37255;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -7430256254512003761LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 9819655177593228892ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 18371217874916449836ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 18231020596276342213ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = -5744911821350211299LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (signed char)-19;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
