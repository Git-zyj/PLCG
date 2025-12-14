#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-78;
unsigned long long int var_4 = 14215176481102207546ULL;
unsigned short var_6 = (unsigned short)47757;
short var_7 = (short)-2082;
short var_9 = (short)16088;
_Bool var_11 = (_Bool)0;
short var_13 = (short)18369;
unsigned long long int var_15 = 5772351511311050008ULL;
int zero = 0;
unsigned long long int var_16 = 1052101706710392232ULL;
unsigned long long int var_17 = 5926296336449400915ULL;
unsigned long long int var_18 = 8352663846975834770ULL;
unsigned long long int var_19 = 16474594656162353176ULL;
long long int var_20 = 7128583922832158252LL;
unsigned long long int var_21 = 18142288797570700108ULL;
unsigned short var_22 = (unsigned short)65462;
unsigned char var_23 = (unsigned char)134;
int var_24 = 2140323505;
signed char var_25 = (signed char)-63;
unsigned int var_26 = 1889952404U;
_Bool var_27 = (_Bool)0;
short var_28 = (short)-11037;
unsigned long long int var_29 = 12262553839688366257ULL;
long long int var_30 = -4352048315265214863LL;
unsigned long long int var_31 = 5985262888884450984ULL;
unsigned long long int arr_0 [13] ;
unsigned char arr_1 [13] ;
unsigned long long int arr_2 [13] [13] ;
unsigned short arr_3 [13] [13] [13] ;
unsigned long long int arr_6 [13] ;
unsigned char arr_7 [13] ;
unsigned char arr_9 [13] [13] [13] [13] ;
unsigned int arr_12 [13] [13] [13] ;
unsigned long long int arr_22 [13] [13] [13] [13] [13] [13] [13] ;
int arr_10 [13] [13] [13] ;
unsigned long long int arr_17 [13] [13] [13] ;
short arr_25 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 11708696771671261284ULL : 8961280500376664973ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 15466165505321363296ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)64315 : (unsigned short)62016;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 9055100479358771826ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)197 : (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 146771121U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 10328901988203860092ULL : 16336007329136928398ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -745419921 : -397758250;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10944592323512184158ULL : 8159472321968425378ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (short)-7683 : (short)25278;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
