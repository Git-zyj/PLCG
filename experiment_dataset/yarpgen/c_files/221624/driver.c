#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9892;
int var_1 = 428995427;
unsigned long long int var_2 = 6974993148856179694ULL;
unsigned short var_4 = (unsigned short)53176;
int var_5 = 1155959523;
unsigned char var_6 = (unsigned char)169;
unsigned int var_8 = 2764367972U;
short var_9 = (short)-26522;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)2561;
short var_12 = (short)-10747;
long long int var_13 = 7781750774095929556LL;
int var_14 = -920221640;
unsigned long long int var_15 = 1099772476498234409ULL;
unsigned long long int var_16 = 6599154092019634946ULL;
unsigned int var_17 = 2713009615U;
int var_18 = -1903070257;
unsigned long long int var_19 = 6983113937944214027ULL;
unsigned long long int var_20 = 11453474731673908760ULL;
unsigned short var_21 = (unsigned short)26129;
unsigned short var_22 = (unsigned short)52053;
unsigned short var_23 = (unsigned short)58099;
unsigned long long int arr_1 [18] ;
short arr_2 [18] ;
unsigned short arr_5 [13] [13] ;
int arr_10 [12] ;
unsigned short arr_11 [12] ;
unsigned char arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 837729845831941965ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-1334;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)39561;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 149141423 : 1489058334;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned short)42825;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (unsigned char)106;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
