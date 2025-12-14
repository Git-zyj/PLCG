#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2238301640349396865LL;
unsigned int var_3 = 4276245593U;
unsigned long long int var_4 = 17879101023221295603ULL;
long long int var_6 = 2448741411334571862LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -2664257117166532710LL;
unsigned int var_10 = 1563635888U;
long long int var_13 = -1120225247431347517LL;
int var_14 = 110029992;
unsigned char var_15 = (unsigned char)182;
int zero = 0;
unsigned char var_18 = (unsigned char)230;
unsigned char var_19 = (unsigned char)3;
unsigned char var_20 = (unsigned char)108;
unsigned char var_21 = (unsigned char)208;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1717740565U;
_Bool var_24 = (_Bool)0;
int var_25 = 792898952;
unsigned int var_26 = 2054731440U;
unsigned long long int var_27 = 11531191174962926949ULL;
int var_28 = 1858272786;
short var_29 = (short)-10440;
unsigned char var_30 = (unsigned char)146;
int var_31 = 206288713;
int var_32 = -177602;
unsigned char var_33 = (unsigned char)49;
unsigned long long int var_34 = 18183647273700206829ULL;
_Bool var_35 = (_Bool)1;
_Bool arr_0 [12] ;
_Bool arr_1 [12] ;
unsigned int arr_4 [19] ;
short arr_5 [19] ;
_Bool arr_6 [19] [19] ;
_Bool arr_8 [19] [19] [19] ;
_Bool arr_9 [19] ;
short arr_12 [19] [19] ;
int arr_13 [19] [19] ;
_Bool arr_19 [25] ;
unsigned char arr_20 [25] ;
_Bool arr_2 [12] ;
unsigned char arr_3 [12] ;
int arr_10 [19] [19] [19] ;
int arr_11 [19] ;
long long int arr_18 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 191130476U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)7677;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (short)22499;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = 835282019;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -184462244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -1995793745;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? -2675227806657317359LL : -4785033783383191063LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
