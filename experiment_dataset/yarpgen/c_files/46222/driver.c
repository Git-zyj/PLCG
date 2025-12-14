#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_4 = 2269251326U;
short var_6 = (short)5239;
unsigned short var_9 = (unsigned short)41725;
int zero = 0;
short var_12 = (short)-12111;
unsigned int var_13 = 917260672U;
int var_14 = -833685379;
signed char var_15 = (signed char)-31;
int var_16 = -553470228;
unsigned short var_17 = (unsigned short)20771;
unsigned short var_18 = (unsigned short)20101;
unsigned long long int var_19 = 6071216700217443205ULL;
unsigned char var_20 = (unsigned char)243;
unsigned long long int var_21 = 10429101579913883772ULL;
int var_22 = 342903106;
unsigned long long int var_23 = 4523661284231689541ULL;
short var_24 = (short)19862;
unsigned long long int var_25 = 9651490718286497545ULL;
int var_26 = -230427920;
long long int var_27 = -8797421242335145831LL;
long long int var_28 = 2288324649910127607LL;
unsigned int var_29 = 2539871141U;
_Bool var_30 = (_Bool)0;
int var_31 = -685424162;
int var_32 = -331851802;
unsigned long long int arr_0 [25] [25] ;
long long int arr_1 [25] [25] ;
signed char arr_2 [25] ;
_Bool arr_4 [17] [17] ;
unsigned char arr_5 [17] ;
unsigned long long int arr_9 [24] ;
long long int arr_13 [11] [11] ;
long long int arr_17 [11] ;
unsigned long long int arr_19 [11] [11] ;
signed char arr_25 [11] [11] ;
_Bool arr_26 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 8823032307779771356ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -6712459754976094667LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 11780119699123219324ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = 4343396181605325624LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = -1984614644705698035LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = 12451785699068417024ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_26 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
