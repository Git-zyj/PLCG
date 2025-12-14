#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10384930054027043034ULL;
signed char var_1 = (signed char)-51;
_Bool var_4 = (_Bool)1;
int var_5 = 1407423047;
unsigned int var_7 = 1911280281U;
unsigned int var_8 = 1666913769U;
short var_10 = (short)-400;
_Bool var_12 = (_Bool)0;
long long int var_13 = -5793048141220133866LL;
unsigned long long int var_14 = 10908439270295349833ULL;
signed char var_15 = (signed char)66;
long long int var_17 = -8650119569846493430LL;
unsigned short var_18 = (unsigned short)56780;
int zero = 0;
unsigned long long int var_19 = 4776294921810044287ULL;
signed char var_20 = (signed char)-77;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 5532985739698584516ULL;
short var_23 = (short)9735;
unsigned int var_24 = 4101969143U;
short var_25 = (short)-9261;
unsigned int var_26 = 2297866755U;
unsigned short var_27 = (unsigned short)22127;
signed char var_28 = (signed char)-55;
unsigned long long int var_29 = 20052449733713274ULL;
_Bool var_30 = (_Bool)1;
int var_31 = 956798314;
unsigned long long int var_32 = 8403433236041855441ULL;
_Bool var_33 = (_Bool)0;
int var_34 = 1496683879;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)34;
signed char var_37 = (signed char)96;
short var_38 = (short)13292;
unsigned char var_39 = (unsigned char)84;
unsigned long long int var_40 = 321168501547584413ULL;
int var_41 = -349065322;
unsigned int var_42 = 1749188732U;
int var_43 = 296851714;
signed char var_44 = (signed char)87;
int var_45 = 1658498167;
signed char var_46 = (signed char)40;
signed char arr_1 [13] [13] ;
unsigned long long int arr_3 [17] ;
unsigned long long int arr_4 [17] [17] ;
_Bool arr_7 [17] [17] ;
unsigned int arr_8 [17] [17] [17] ;
int arr_9 [17] ;
signed char arr_10 [17] [17] [17] ;
unsigned short arr_12 [17] [17] [17] ;
short arr_13 [17] [17] [17] ;
_Bool arr_17 [17] [17] [17] ;
unsigned int arr_19 [17] ;
unsigned long long int arr_18 [17] [17] [17] [17] ;
unsigned char arr_25 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 17100454686886150138ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 3596359067395860272ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3582296160U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 819264084;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)29141;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-29796;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 3615069044U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 18261892223113465859ULL : 2617596029046933891ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (unsigned char)241;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
