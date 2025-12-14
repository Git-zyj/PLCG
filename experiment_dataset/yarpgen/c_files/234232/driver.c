#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4596033695420059327LL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)35;
unsigned char var_3 = (unsigned char)56;
unsigned int var_4 = 2866258039U;
long long int var_5 = 8013593534134460021LL;
unsigned int var_6 = 867731539U;
long long int var_7 = -2198479214091920779LL;
unsigned char var_8 = (unsigned char)155;
unsigned int var_9 = 2551823990U;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3827424803U;
long long int var_12 = 5404708763345871167LL;
unsigned char var_13 = (unsigned char)85;
signed char var_14 = (signed char)-73;
int zero = 0;
unsigned int var_15 = 935164409U;
unsigned long long int var_16 = 13492947532207185569ULL;
signed char var_17 = (signed char)(-127 - 1);
long long int var_18 = -966239630559324156LL;
unsigned long long int var_19 = 11210587692907108001ULL;
unsigned int var_20 = 2294754493U;
signed char var_21 = (signed char)45;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3145059909U;
_Bool var_24 = (_Bool)1;
long long int var_25 = 7106418814991602347LL;
int var_26 = 2108630932;
unsigned char var_27 = (unsigned char)123;
signed char var_28 = (signed char)123;
unsigned char var_29 = (unsigned char)26;
long long int var_30 = 8813697803908622907LL;
unsigned char var_31 = (unsigned char)110;
_Bool var_32 = (_Bool)0;
_Bool var_33 = (_Bool)1;
unsigned long long int var_34 = 16654407278812327276ULL;
unsigned long long int arr_0 [20] [20] ;
long long int arr_1 [20] ;
signed char arr_2 [20] ;
unsigned long long int arr_3 [20] ;
int arr_4 [20] [20] ;
unsigned long long int arr_5 [20] [20] ;
unsigned long long int arr_6 [20] ;
unsigned char arr_7 [20] [20] [20] ;
unsigned char arr_8 [20] [20] [20] [20] ;
_Bool arr_9 [20] ;
_Bool arr_10 [20] [20] ;
int arr_15 [20] [20] ;
unsigned int arr_17 [20] [20] ;
unsigned long long int arr_29 [14] ;
unsigned char arr_30 [14] [14] [14] [14] ;
unsigned char arr_45 [19] [19] [19] [19] ;
unsigned char arr_12 [20] [20] [20] [20] ;
long long int arr_13 [20] [20] [20] ;
unsigned char arr_18 [20] [20] ;
unsigned int arr_37 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 13225354999846242534ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -3653404899919478876LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 16328549710272148655ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = -436296049;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 11005376515717480294ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 2818196038294458234ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = -1256296775;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = 4054644147U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = 13377876919651242915ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)25 : (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)166 : (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -6896767125972420909LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = 2884431657U;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
