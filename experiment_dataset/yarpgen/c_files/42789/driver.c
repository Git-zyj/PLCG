#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)130;
signed char var_3 = (signed char)70;
unsigned long long int var_5 = 12578969335717693116ULL;
long long int var_6 = 8869758519312014541LL;
long long int var_7 = 3533917405787471154LL;
unsigned char var_9 = (unsigned char)103;
unsigned char var_10 = (unsigned char)218;
short var_13 = (short)32071;
int zero = 0;
unsigned int var_14 = 3907102154U;
unsigned long long int var_15 = 3539892717389019880ULL;
unsigned int var_16 = 1653646760U;
short var_17 = (short)-24164;
unsigned long long int var_18 = 6263736092395677884ULL;
unsigned long long int var_19 = 18356079619578099625ULL;
unsigned long long int var_20 = 14603094147367710311ULL;
unsigned long long int var_21 = 4597800775034038480ULL;
short var_22 = (short)17975;
signed char var_23 = (signed char)110;
unsigned long long int var_24 = 9646887635833623703ULL;
short var_25 = (short)-9172;
unsigned int var_26 = 3855553972U;
unsigned long long int var_27 = 11936172141562849471ULL;
unsigned int arr_0 [21] ;
short arr_1 [21] ;
short arr_3 [21] ;
signed char arr_4 [21] ;
unsigned long long int arr_5 [21] ;
unsigned long long int arr_7 [21] ;
short arr_9 [21] [21] [21] ;
long long int arr_19 [18] ;
short arr_2 [21] ;
unsigned char arr_13 [21] [21] ;
short arr_14 [21] ;
unsigned long long int arr_15 [21] [21] [21] ;
unsigned int arr_20 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1430818608U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)29205;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)2052;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 17830332775249759288ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 5661726783798512908ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)21177;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 4140684082770475550LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-17759;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)112 : (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)31153 : (short)32214;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7293285197882582128ULL : 497507651085802101ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 3127389051U : 2430271777U;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
