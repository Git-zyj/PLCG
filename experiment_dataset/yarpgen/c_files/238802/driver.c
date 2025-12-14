#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3615894794U;
long long int var_1 = -6297762538915461773LL;
unsigned char var_2 = (unsigned char)129;
unsigned long long int var_4 = 13783211122786771185ULL;
signed char var_5 = (signed char)-73;
unsigned char var_6 = (unsigned char)177;
unsigned long long int var_7 = 18198026155102006979ULL;
unsigned long long int var_8 = 18211724693596689051ULL;
signed char var_9 = (signed char)-92;
int var_10 = -2123507655;
unsigned long long int var_11 = 8099322802291913292ULL;
long long int var_13 = 7049573948722819577LL;
unsigned short var_14 = (unsigned short)51529;
int zero = 0;
short var_15 = (short)1467;
unsigned long long int var_16 = 17054491717468171620ULL;
unsigned long long int var_17 = 7054012500625766760ULL;
unsigned int var_18 = 1380087641U;
unsigned short var_19 = (unsigned short)58756;
unsigned char var_20 = (unsigned char)246;
int var_21 = -187873264;
short var_22 = (short)20558;
unsigned long long int var_23 = 4580577368078262304ULL;
unsigned short var_24 = (unsigned short)44534;
unsigned int var_25 = 3750238069U;
long long int arr_1 [15] [15] ;
long long int arr_2 [15] [15] ;
unsigned short arr_3 [15] ;
short arr_4 [15] [15] ;
int arr_6 [15] [15] ;
unsigned int arr_7 [15] [15] ;
signed char arr_10 [15] [15] [15] [15] ;
int arr_13 [15] [15] [15] [15] [15] ;
unsigned short arr_14 [20] ;
int arr_15 [20] ;
unsigned short arr_16 [20] [20] [20] ;
unsigned int arr_21 [20] ;
unsigned int arr_23 [20] [20] [20] [20] ;
unsigned char arr_24 [20] ;
unsigned int arr_18 [20] ;
long long int arr_19 [20] ;
unsigned char arr_26 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -746573792324375154LL : 7723289714603235809LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -4871921313885690832LL : -7193087001469113591LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11476 : (unsigned short)39201;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)11578 : (short)5544;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = -1786157119;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 4059306792U : 569740192U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)10 : (signed char)-59;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -1464979894;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (unsigned short)45222;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = -1628524388;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)18832;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1602897724U : 1582788297U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1741335064U : 2132748746U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1286718369U : 3482448186U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 6907680492421385378LL : 8705563824050399714LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)113 : (unsigned char)174;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
