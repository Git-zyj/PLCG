#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned int var_2 = 2133096195U;
unsigned int var_3 = 3185314060U;
unsigned int var_4 = 2342676541U;
unsigned int var_5 = 1044200662U;
unsigned long long int var_8 = 14441415227291914620ULL;
long long int var_9 = -369414837757312702LL;
unsigned long long int var_10 = 9570088735740610598ULL;
unsigned char var_11 = (unsigned char)141;
signed char var_12 = (signed char)-88;
long long int var_13 = 8380024620715056347LL;
signed char var_14 = (signed char)123;
unsigned char var_15 = (unsigned char)174;
signed char var_16 = (signed char)-96;
signed char var_18 = (signed char)72;
int zero = 0;
unsigned char var_19 = (unsigned char)12;
int var_20 = 207434175;
unsigned int var_21 = 2070949592U;
unsigned char var_22 = (unsigned char)138;
long long int var_23 = -920502291197485764LL;
unsigned long long int var_24 = 11193725080559322886ULL;
unsigned int var_25 = 2236846111U;
long long int var_26 = -8160368017950781202LL;
signed char var_27 = (signed char)-108;
unsigned char var_28 = (unsigned char)156;
long long int var_29 = -6787330630547619013LL;
short var_30 = (short)8187;
signed char var_31 = (signed char)-7;
long long int var_32 = 925436289965251420LL;
unsigned int var_33 = 2820653129U;
unsigned int var_34 = 3023776073U;
int var_35 = -905997508;
unsigned long long int arr_0 [13] [13] ;
short arr_1 [13] [13] ;
_Bool arr_5 [13] [13] [13] ;
unsigned long long int arr_6 [13] [13] ;
_Bool arr_8 [14] [14] ;
long long int arr_9 [14] [14] ;
unsigned long long int arr_11 [14] [14] [14] ;
int arr_16 [21] ;
unsigned char arr_22 [21] ;
unsigned char arr_12 [14] ;
long long int arr_13 [14] [14] [14] ;
_Bool arr_18 [21] [21] ;
unsigned int arr_23 [21] [21] ;
long long int arr_24 [21] [21] [21] [21] ;
unsigned int arr_28 [13] ;
unsigned int arr_29 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 5171196334805818848ULL : 8815103976074607712ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-29010 : (short)30000;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 659518254920089323ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = -7454269453282591881LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 505056216102353504ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = -164797398;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1976211936967098277LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = 2240294565U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = -2333523609572054120LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 156988666U : 2697657027U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 494075919U : 152238235U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
