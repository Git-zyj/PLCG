#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
unsigned int var_1 = 1920630379U;
signed char var_2 = (signed char)0;
long long int var_3 = 7168731323149621414LL;
int var_4 = -2038182932;
unsigned long long int var_5 = 4537163300818975913ULL;
long long int var_6 = -6576970896392189970LL;
signed char var_7 = (signed char)-46;
unsigned char var_8 = (unsigned char)132;
long long int var_9 = 5301125896687980886LL;
unsigned char var_10 = (unsigned char)230;
long long int var_11 = -3567022797174849830LL;
unsigned char var_12 = (unsigned char)211;
signed char var_13 = (signed char)89;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)11983;
unsigned int var_16 = 2445530530U;
unsigned char var_17 = (unsigned char)15;
unsigned int var_18 = 3564161520U;
unsigned int var_19 = 1526459621U;
long long int var_20 = -2197810072963813726LL;
signed char var_21 = (signed char)-107;
unsigned long long int var_22 = 8864815100815923977ULL;
_Bool var_23 = (_Bool)0;
long long int var_24 = 5800439686416505272LL;
unsigned char var_25 = (unsigned char)148;
unsigned char var_26 = (unsigned char)102;
int var_27 = 1315050647;
unsigned int var_28 = 2784435323U;
int var_29 = -2027973689;
unsigned char var_30 = (unsigned char)248;
_Bool var_31 = (_Bool)1;
unsigned char arr_13 [22] ;
unsigned long long int arr_18 [22] [22] [22] ;
unsigned short arr_32 [11] [11] [11] [11] ;
unsigned int arr_37 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 12645707279201977149ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)11651 : (unsigned short)11288;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 437945435U : 1620871749U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
