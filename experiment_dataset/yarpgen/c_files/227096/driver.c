#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9091711573062432154LL;
long long int var_2 = -3785069101013298061LL;
long long int var_6 = 4845637394151824983LL;
unsigned long long int var_12 = 11747063701861160562ULL;
unsigned char var_13 = (unsigned char)141;
unsigned int var_14 = 3039923868U;
unsigned short var_15 = (unsigned short)23057;
int zero = 0;
signed char var_17 = (signed char)-107;
unsigned char var_18 = (unsigned char)97;
unsigned long long int var_19 = 770138981410076360ULL;
unsigned long long int var_20 = 3246499794324077136ULL;
long long int var_21 = -1515172365980724266LL;
int var_22 = -1421957903;
_Bool var_23 = (_Bool)0;
long long int var_24 = 2917190976309142522LL;
int var_25 = 1959600505;
signed char var_26 = (signed char)60;
signed char var_27 = (signed char)98;
unsigned long long int var_28 = 1445455078999402302ULL;
signed char var_29 = (signed char)82;
unsigned short var_30 = (unsigned short)52205;
unsigned char var_31 = (unsigned char)231;
int var_32 = -212911001;
_Bool arr_0 [11] ;
short arr_3 [11] [11] ;
unsigned int arr_4 [11] ;
long long int arr_5 [16] ;
signed char arr_7 [16] [16] ;
unsigned int arr_8 [18] ;
unsigned int arr_9 [18] ;
unsigned int arr_10 [20] [20] ;
short arr_11 [20] [20] ;
unsigned int arr_13 [20] [20] [20] ;
signed char arr_14 [20] [20] [20] ;
int arr_15 [20] [20] ;
short arr_18 [20] [20] ;
long long int arr_16 [20] ;
signed char arr_19 [20] [20] [20] ;
unsigned char arr_20 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-26347;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1370466948U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -4832131490362975126LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 591030294U : 1795760288U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 595334306U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 2359322817U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-2039 : (short)13926;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3413188149U : 1686189916U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)94 : (signed char)53;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = -872378513;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (short)-22794;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -7174062577468097667LL : -5421064664379521339LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-76 : (signed char)-20;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)120 : (unsigned char)79;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
