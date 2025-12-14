#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)6635;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 5973518699349396060ULL;
unsigned char var_10 = (unsigned char)158;
signed char var_14 = (signed char)-90;
int zero = 0;
short var_16 = (short)-155;
unsigned short var_17 = (unsigned short)47021;
int var_18 = 269114106;
long long int var_19 = -3922618219413118351LL;
unsigned int var_20 = 1054450380U;
unsigned long long int var_21 = 15241219853258307496ULL;
signed char var_22 = (signed char)-112;
int var_23 = 143359082;
int var_24 = -891575495;
unsigned short var_25 = (unsigned short)20078;
unsigned int var_26 = 2809680795U;
int var_27 = -120393380;
unsigned short var_28 = (unsigned short)44996;
unsigned short var_29 = (unsigned short)52051;
long long int var_30 = 1843317015410128599LL;
signed char var_31 = (signed char)30;
_Bool var_32 = (_Bool)0;
_Bool var_33 = (_Bool)0;
short var_34 = (short)690;
int var_35 = -948432373;
signed char var_36 = (signed char)118;
long long int var_37 = 5727842435030131784LL;
signed char var_38 = (signed char)-76;
_Bool var_39 = (_Bool)0;
unsigned char var_40 = (unsigned char)56;
unsigned short var_41 = (unsigned short)25469;
unsigned long long int var_42 = 13134713463550169362ULL;
signed char arr_0 [23] ;
unsigned short arr_9 [23] [23] [23] [23] [23] ;
unsigned int arr_11 [23] [23] [23] [23] [23] [23] ;
long long int arr_12 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_13 [23] [23] [23] [23] [23] ;
unsigned long long int arr_28 [23] [23] ;
_Bool arr_29 [23] ;
unsigned short arr_32 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)22013;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3065825566U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2185582909286152863LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 9499540923873930030ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = 2435007141690100644ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)20057;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
