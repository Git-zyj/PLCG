#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 4457541253787605670ULL;
unsigned int var_6 = 2108174720U;
unsigned char var_7 = (unsigned char)40;
unsigned int var_8 = 3761013135U;
int var_9 = -168101059;
unsigned long long int var_10 = 12127113368618398619ULL;
unsigned short var_13 = (unsigned short)54577;
unsigned char var_14 = (unsigned char)6;
unsigned int var_15 = 2629004287U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)52;
unsigned char var_18 = (unsigned char)157;
unsigned char var_19 = (unsigned char)176;
unsigned short var_20 = (unsigned short)44671;
unsigned long long int var_21 = 2402981039859125904ULL;
signed char var_22 = (signed char)35;
int var_23 = 727383650;
unsigned long long int var_24 = 8157386747902250184ULL;
unsigned int var_25 = 1875082955U;
signed char var_26 = (signed char)69;
int var_27 = 1868082706;
unsigned short var_28 = (unsigned short)5424;
unsigned int var_29 = 1575683552U;
unsigned short var_30 = (unsigned short)9520;
signed char var_31 = (signed char)60;
long long int var_32 = 7502587793911516042LL;
unsigned short var_33 = (unsigned short)31318;
unsigned long long int var_34 = 16689618421483240488ULL;
unsigned long long int var_35 = 6943553168754836173ULL;
unsigned long long int var_36 = 5840166293267504217ULL;
unsigned char arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
_Bool arr_2 [25] [25] ;
unsigned char arr_3 [25] [25] ;
signed char arr_4 [25] ;
int arr_5 [25] [25] ;
int arr_8 [25] [25] ;
_Bool arr_12 [25] [25] [25] [25] ;
unsigned int arr_14 [25] [25] [25] [25] [25] ;
unsigned char arr_16 [25] [25] ;
int arr_17 [15] ;
int arr_21 [15] [15] [15] ;
unsigned char arr_24 [15] [15] [15] [15] ;
long long int arr_28 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 18396557349961619402ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 1411957055;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 471570656;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 156686107U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = -87608243;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -2025413853;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -726091895671294663LL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
