#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15699571751806019347ULL;
unsigned short var_3 = (unsigned short)47629;
unsigned long long int var_5 = 8581518468355376730ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)162;
long long int var_8 = -682170001659106652LL;
unsigned short var_9 = (unsigned short)32940;
unsigned char var_10 = (unsigned char)154;
int var_11 = -197939367;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 9400414015356259382ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 5596610780448436163ULL;
long long int var_19 = 8010663493715688516LL;
unsigned int var_20 = 2120153764U;
unsigned char var_21 = (unsigned char)56;
unsigned long long int var_22 = 12967278546478532129ULL;
unsigned long long int var_23 = 208306424802678529ULL;
int var_24 = 1341023463;
int var_25 = -801310176;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)-47;
signed char var_28 = (signed char)69;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)240;
signed char arr_1 [15] ;
signed char arr_3 [18] ;
long long int arr_4 [18] ;
unsigned long long int arr_5 [18] ;
signed char arr_6 [18] [18] [18] ;
int arr_7 [18] [18] ;
unsigned char arr_9 [18] [18] [18] ;
long long int arr_10 [18] [18] [18] ;
short arr_16 [18] [18] [18] [18] [18] [18] [18] ;
short arr_17 [18] [18] [18] ;
unsigned char arr_2 [15] ;
int arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)7 : (signed char)-45;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 4477301709959879002LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 9887142170198046764ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 245842272;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)232 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6444138452797991471LL : -3849633464841327435LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-18596;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)-21976;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 875592706 : 907435194;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
