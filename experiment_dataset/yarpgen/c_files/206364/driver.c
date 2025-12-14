#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
unsigned short var_1 = (unsigned short)38141;
signed char var_2 = (signed char)61;
unsigned char var_3 = (unsigned char)64;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-18;
long long int var_7 = 2770044194258297015LL;
long long int var_9 = -3960628977395451664LL;
unsigned char var_10 = (unsigned char)62;
signed char var_11 = (signed char)-42;
signed char var_13 = (signed char)-114;
unsigned int var_14 = 3343710277U;
signed char var_15 = (signed char)-114;
long long int var_16 = 6311799357257898025LL;
unsigned int var_17 = 1262319579U;
unsigned int var_19 = 2283332711U;
int zero = 0;
long long int var_20 = -4801268005067669530LL;
unsigned short var_21 = (unsigned short)57127;
long long int var_22 = 3907546274436131981LL;
signed char var_23 = (signed char)89;
signed char var_24 = (signed char)36;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)28549;
signed char var_27 = (signed char)47;
long long int var_28 = 4460787410951160256LL;
unsigned char var_29 = (unsigned char)84;
unsigned short var_30 = (unsigned short)2330;
signed char var_31 = (signed char)-80;
unsigned int var_32 = 3021380317U;
unsigned char arr_0 [16] ;
long long int arr_1 [16] ;
long long int arr_2 [16] [16] ;
unsigned short arr_3 [16] ;
unsigned short arr_4 [16] [16] ;
long long int arr_6 [21] ;
unsigned int arr_7 [21] [21] ;
unsigned char arr_11 [15] [15] ;
unsigned char arr_12 [15] ;
unsigned char arr_13 [15] [15] [15] ;
short arr_19 [15] [15] [15] ;
signed char arr_23 [15] [15] [15] ;
_Bool arr_5 [16] [16] [16] ;
unsigned short arr_17 [15] [15] [15] ;
unsigned long long int arr_18 [15] [15] ;
unsigned int arr_26 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -3541149838938142680LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -5081183359025982925LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)40519;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)26730 : (unsigned short)52901;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 7602840825084065407LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 259515247U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (short)-18444;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)27781 : (unsigned short)32565;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 14520300856335763247ULL : 1027562399621694940ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_26 [i_0] [i_1] = 785462147U;
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
