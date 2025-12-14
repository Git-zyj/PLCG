#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -297665035;
int var_8 = 1960247563;
unsigned long long int var_10 = 5509574378248125414ULL;
long long int var_11 = 3897298776096232807LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)5039;
unsigned long long int var_20 = 15974277996216958621ULL;
unsigned char var_21 = (unsigned char)183;
long long int var_22 = 3021521358297876608LL;
int var_23 = -54319317;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 2661739197247414114ULL;
unsigned long long int var_26 = 3724695555972118285ULL;
long long int var_27 = -7908563225733727076LL;
unsigned int var_28 = 4170682163U;
unsigned long long int var_29 = 16011029561115819884ULL;
long long int var_30 = 8099205158219921068LL;
int var_31 = -620790105;
_Bool var_32 = (_Bool)1;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 1227980809U;
long long int var_35 = -6044759356300804516LL;
unsigned short var_36 = (unsigned short)51325;
short var_37 = (short)22174;
unsigned long long int arr_1 [19] [19] ;
unsigned long long int arr_2 [13] ;
unsigned char arr_3 [13] ;
unsigned long long int arr_4 [13] ;
unsigned char arr_5 [13] [13] ;
unsigned long long int arr_10 [13] [13] [13] [13] ;
short arr_12 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 6195776030603218913ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 18260461753174042943ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 14470163278752732946ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 14941232305047176275ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-20586 : (short)4911;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
