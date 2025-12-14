#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3918932227U;
unsigned int var_4 = 596625658U;
unsigned long long int var_6 = 8481674265140904838ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 17532613865136049563ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 17401099480673636412ULL;
signed char var_14 = (signed char)-24;
unsigned char var_15 = (unsigned char)187;
long long int var_16 = 795370801806806824LL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)77;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-30;
unsigned short var_22 = (unsigned short)52065;
unsigned long long int var_23 = 5921403221940769935ULL;
unsigned char var_24 = (unsigned char)76;
unsigned long long int var_25 = 4176578646834198500ULL;
unsigned long long int var_26 = 11123347167775972261ULL;
unsigned short var_27 = (unsigned short)47673;
unsigned int var_28 = 979270420U;
short var_29 = (short)-13041;
unsigned short var_30 = (unsigned short)17385;
unsigned short var_31 = (unsigned short)7645;
long long int arr_0 [12] ;
signed char arr_7 [12] [12] [12] [12] ;
_Bool arr_11 [18] ;
int arr_12 [18] ;
int arr_13 [18] ;
unsigned long long int arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 5413715989749860447LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-94 : (signed char)-101;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = -1679503203;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 857218219;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 417386170726416691ULL;
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
