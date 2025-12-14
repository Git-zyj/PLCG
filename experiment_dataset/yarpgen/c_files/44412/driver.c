#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
short var_1 = (short)26776;
long long int var_3 = 5559802009684330474LL;
long long int var_4 = -8052528664929241111LL;
int var_5 = -58398441;
unsigned int var_6 = 1759849771U;
unsigned long long int var_7 = 9636749641663857785ULL;
signed char var_8 = (signed char)-98;
long long int var_10 = 3454813246102538069LL;
long long int var_11 = -4305402551102382886LL;
int var_13 = 1545926325;
int zero = 0;
unsigned char var_14 = (unsigned char)251;
short var_15 = (short)16897;
unsigned short var_16 = (unsigned short)35072;
unsigned short var_17 = (unsigned short)47426;
unsigned long long int var_18 = 9325902851711473080ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
int var_21 = 2106365645;
int var_22 = 1402869414;
signed char var_23 = (signed char)-125;
unsigned int var_24 = 3202445300U;
int var_25 = 654569738;
long long int var_26 = -247498223360318527LL;
unsigned long long int var_27 = 5730990021182398317ULL;
signed char var_28 = (signed char)-125;
signed char var_29 = (signed char)78;
long long int var_30 = 6854638764679095351LL;
signed char var_31 = (signed char)62;
long long int var_32 = 2258442147896297943LL;
signed char var_33 = (signed char)-104;
long long int var_34 = 6342802661869758768LL;
signed char var_35 = (signed char)-26;
long long int var_36 = -2951040408625735671LL;
long long int var_37 = 5771812320887062792LL;
long long int var_38 = -7902776258083446183LL;
unsigned short var_39 = (unsigned short)7805;
unsigned int var_40 = 3008287406U;
short var_41 = (short)-19575;
long long int var_42 = 3168163291712911852LL;
long long int var_43 = -3130749484614220779LL;
signed char var_44 = (signed char)127;
long long int var_45 = 4296904513438317149LL;
signed char var_46 = (signed char)-24;
unsigned char var_47 = (unsigned char)86;
unsigned int var_48 = 2629464067U;
signed char arr_0 [19] ;
int arr_1 [19] [19] ;
_Bool arr_2 [16] ;
short arr_3 [16] [16] ;
long long int arr_5 [16] ;
_Bool arr_7 [16] [16] ;
unsigned short arr_9 [16] [16] [16] [16] ;
unsigned short arr_10 [16] [16] [16] ;
unsigned short arr_11 [16] ;
signed char arr_12 [16] [16] [16] [16] [16] [16] ;
unsigned short arr_14 [16] [16] [16] [16] ;
signed char arr_15 [16] [16] ;
long long int arr_17 [16] [16] ;
int arr_18 [16] [16] [16] ;
unsigned char arr_20 [16] [16] ;
long long int arr_21 [16] [16] ;
_Bool arr_22 [16] [16] [16] [16] ;
unsigned int arr_39 [16] [16] [16] [16] ;
_Bool arr_45 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 585153751;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (short)1348;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -8107014453820841473LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)59795;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)47322;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)52822;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47266;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = 8192799482839591202LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -1304178279;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = -6875400835425682770LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 1941257406U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_47);
    hash(&seed, var_48);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
