#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13431281159191372668ULL;
unsigned int var_1 = 62803983U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13817631210633267626ULL;
unsigned int var_5 = 471912553U;
_Bool var_6 = (_Bool)1;
short var_7 = (short)721;
unsigned short var_8 = (unsigned short)37906;
unsigned char var_9 = (unsigned char)166;
unsigned short var_10 = (unsigned short)26540;
unsigned char var_11 = (unsigned char)74;
short var_12 = (short)14732;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13677780117037799089ULL;
unsigned int var_15 = 3875372712U;
unsigned char var_16 = (unsigned char)204;
unsigned long long int var_17 = 8411868554027025430ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2835698168U;
unsigned long long int var_20 = 4546900977521346772ULL;
unsigned short var_21 = (unsigned short)19009;
short var_22 = (short)10674;
unsigned long long int var_23 = 3404281826485744012ULL;
unsigned int var_24 = 491103149U;
unsigned int var_25 = 1045616121U;
unsigned int var_26 = 1451913882U;
unsigned long long int var_27 = 8293897619624657190ULL;
short var_28 = (short)15326;
unsigned int var_29 = 380221334U;
unsigned int var_30 = 1262231782U;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)12969;
_Bool var_33 = (_Bool)0;
unsigned short arr_4 [20] [20] [20] ;
unsigned long long int arr_8 [20] [20] ;
unsigned int arr_21 [20] [20] [20] [20] [20] ;
unsigned long long int arr_22 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)25985 : (unsigned short)56391;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 9928881491740589637ULL : 2601823072407271744ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 2958474188U : 4163172968U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 3930523120556737706ULL : 12666498588424599927ULL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
