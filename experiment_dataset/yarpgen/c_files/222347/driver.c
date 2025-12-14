#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7167668614995722098LL;
long long int var_1 = 2160944935766306738LL;
unsigned int var_2 = 3359109521U;
int var_3 = 171261201;
unsigned long long int var_4 = 14392091710039524284ULL;
unsigned long long int var_5 = 9177851728149661084ULL;
long long int var_7 = 3498799474479370104LL;
unsigned long long int var_9 = 9006871519647616340ULL;
int zero = 0;
unsigned long long int var_10 = 15887753573203183674ULL;
unsigned long long int var_11 = 14772917100429987807ULL;
unsigned long long int var_12 = 6093522684590571496ULL;
unsigned char var_13 = (unsigned char)93;
unsigned long long int var_14 = 1468034374183365581ULL;
int var_15 = 402959154;
signed char var_16 = (signed char)104;
signed char var_17 = (signed char)122;
unsigned long long int var_18 = 13009176738993166385ULL;
signed char var_19 = (signed char)66;
unsigned long long int var_20 = 4741782301319988963ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 3469303214052829661ULL;
_Bool arr_0 [11] ;
unsigned long long int arr_1 [11] [11] ;
unsigned long long int arr_2 [11] [11] ;
unsigned long long int arr_3 [11] ;
int arr_5 [11] [11] ;
_Bool arr_8 [11] [11] ;
_Bool arr_13 [11] [11] [11] [11] ;
unsigned long long int arr_15 [11] [11] [11] ;
int arr_4 [11] [11] ;
unsigned long long int arr_17 [11] [11] [11] ;
int arr_22 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 4080128938780428518ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 9608547178693430682ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 18382355731538203838ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1319366016;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 9135455507162794650ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 329606710;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 15357274402385695307ULL : 8196484043398048460ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = 1677541416;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
