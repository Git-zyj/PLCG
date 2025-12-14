#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
unsigned char var_2 = (unsigned char)246;
signed char var_3 = (signed char)32;
_Bool var_4 = (_Bool)1;
int var_5 = -118677253;
unsigned char var_6 = (unsigned char)115;
unsigned char var_7 = (unsigned char)89;
unsigned int var_8 = 3561935034U;
unsigned short var_11 = (unsigned short)55958;
long long int var_13 = -6133912472197390264LL;
int zero = 0;
unsigned char var_14 = (unsigned char)108;
signed char var_15 = (signed char)34;
signed char var_16 = (signed char)101;
unsigned int var_17 = 3798959192U;
unsigned char var_18 = (unsigned char)226;
unsigned short var_19 = (unsigned short)45363;
signed char var_20 = (signed char)45;
long long int var_21 = 1985792831489664295LL;
unsigned char var_22 = (unsigned char)81;
int var_23 = -740653467;
unsigned char var_24 = (unsigned char)141;
unsigned char var_25 = (unsigned char)217;
unsigned char var_26 = (unsigned char)144;
unsigned char var_27 = (unsigned char)99;
signed char var_28 = (signed char)9;
long long int var_29 = 4913650272751821779LL;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
unsigned char arr_4 [19] [19] [19] ;
unsigned char arr_7 [20] [20] ;
unsigned int arr_8 [20] ;
unsigned short arr_9 [20] [20] ;
unsigned char arr_12 [18] [18] ;
unsigned char arr_13 [18] ;
unsigned char arr_14 [18] [18] [18] ;
unsigned char arr_17 [18] ;
int arr_3 [19] [19] ;
_Bool arr_6 [19] [19] ;
long long int arr_10 [20] [20] ;
long long int arr_11 [20] ;
unsigned char arr_19 [18] [18] ;
unsigned short arr_20 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)54209;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)36891;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 179165457U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)25703;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -2064086098;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 8288022870794220922LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = -1654551875723347167LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)0 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (unsigned short)46433;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
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
