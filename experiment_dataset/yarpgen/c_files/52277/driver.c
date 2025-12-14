#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25317;
unsigned short var_2 = (unsigned short)64204;
unsigned short var_3 = (unsigned short)1699;
unsigned short var_4 = (unsigned short)35539;
short var_5 = (short)1589;
unsigned short var_6 = (unsigned short)67;
signed char var_7 = (signed char)-57;
short var_9 = (short)-30875;
unsigned short var_10 = (unsigned short)62920;
unsigned long long int var_11 = 5637289190493111807ULL;
unsigned long long int var_13 = 2838979012675373094ULL;
unsigned short var_17 = (unsigned short)64089;
unsigned long long int var_18 = 13010683577688694404ULL;
long long int var_19 = -7605921933773765374LL;
int zero = 0;
short var_20 = (short)29953;
signed char var_21 = (signed char)-23;
unsigned long long int var_22 = 16567419813680058843ULL;
unsigned long long int var_23 = 7864274524840180241ULL;
signed char var_24 = (signed char)-50;
unsigned long long int var_25 = 547580218008408100ULL;
signed char var_26 = (signed char)75;
short var_27 = (short)-17997;
long long int var_28 = -5481692623366914770LL;
unsigned int var_29 = 1754787672U;
short var_30 = (short)10022;
signed char arr_0 [11] ;
unsigned short arr_2 [11] [11] ;
unsigned char arr_3 [11] ;
signed char arr_7 [11] [11] [11] ;
_Bool arr_10 [11] ;
unsigned long long int arr_15 [11] [11] [11] [11] [11] ;
unsigned long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)58961;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 17308658301646446196ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 14464360142223444114ULL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
