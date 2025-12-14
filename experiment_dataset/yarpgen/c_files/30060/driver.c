#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1139857965894616987LL;
signed char var_2 = (signed char)-57;
short var_4 = (short)15721;
unsigned int var_5 = 4008938950U;
long long int var_6 = -5179096684866568137LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-82;
int var_10 = 10388494;
unsigned char var_11 = (unsigned char)249;
int zero = 0;
unsigned short var_14 = (unsigned short)7343;
unsigned int var_15 = 697012512U;
long long int var_16 = 336643909259639120LL;
int var_17 = 1257391600;
signed char var_18 = (signed char)-16;
unsigned char var_19 = (unsigned char)172;
unsigned int var_20 = 1302987564U;
unsigned long long int var_21 = 6617578288900964616ULL;
unsigned char var_22 = (unsigned char)84;
short var_23 = (short)-18278;
int var_24 = -1902899514;
int var_25 = -2132091498;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)9799;
unsigned short var_28 = (unsigned short)65002;
int var_29 = -2020435878;
unsigned long long int var_30 = 5223536373568585447ULL;
signed char arr_0 [18] [18] ;
unsigned long long int arr_4 [18] ;
int arr_5 [18] [18] ;
signed char arr_6 [18] [18] ;
long long int arr_7 [18] ;
long long int arr_12 [18] ;
unsigned int arr_21 [25] [25] ;
unsigned long long int arr_3 [18] [18] ;
unsigned long long int arr_13 [18] [18] ;
signed char arr_14 [18] [18] [18] ;
unsigned short arr_19 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 4876663839290607402ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -24756683;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -2043579160636140222LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 764866826415255527LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = 1472392827U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 6298613080703937711ULL : 2249910754356517402ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 15806155539085573365ULL : 4609124992662999071ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)107;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (unsigned short)58342;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
