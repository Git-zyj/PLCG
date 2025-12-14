#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2090084973;
long long int var_2 = -946839260443204010LL;
unsigned char var_3 = (unsigned char)158;
unsigned char var_4 = (unsigned char)207;
_Bool var_5 = (_Bool)0;
short var_6 = (short)20716;
unsigned char var_7 = (unsigned char)131;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-78;
long long int var_12 = 6178749278142544384LL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)37018;
int zero = 0;
unsigned long long int var_17 = 3075214259500342791ULL;
unsigned char var_18 = (unsigned char)115;
int var_19 = 1616141048;
int var_20 = -1468643947;
unsigned long long int var_21 = 13447501829121472129ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 17085835244479294234ULL;
unsigned short var_24 = (unsigned short)19593;
signed char var_25 = (signed char)-44;
unsigned long long int var_26 = 14737395650572986500ULL;
unsigned char var_27 = (unsigned char)250;
unsigned long long int var_28 = 15055689403685002243ULL;
int var_29 = 633003316;
unsigned long long int var_30 = 10254067120496078537ULL;
unsigned char var_31 = (unsigned char)189;
_Bool var_32 = (_Bool)1;
unsigned long long int var_33 = 12696170433155722069ULL;
unsigned short var_34 = (unsigned short)15132;
_Bool var_35 = (_Bool)0;
unsigned long long int var_36 = 10789928681450237259ULL;
unsigned char var_37 = (unsigned char)119;
unsigned char var_38 = (unsigned char)241;
unsigned short arr_7 [21] [21] ;
_Bool arr_8 [21] [21] [21] [21] ;
signed char arr_17 [21] [21] ;
unsigned long long int arr_28 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)22412 : (unsigned short)46658;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)53 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 3604676224924168425ULL : 8762482329835523003ULL;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
