#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8328109282389283993LL;
unsigned short var_2 = (unsigned short)15389;
short var_4 = (short)-24501;
unsigned long long int var_5 = 9536128541781777710ULL;
unsigned long long int var_6 = 9003724115173315697ULL;
unsigned char var_8 = (unsigned char)27;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)142;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 10762171312787541087ULL;
signed char var_16 = (signed char)54;
int var_17 = -1100673380;
unsigned short var_18 = (unsigned short)38532;
int var_19 = 234043634;
unsigned long long int var_20 = 14037802513881611220ULL;
short var_21 = (short)4952;
unsigned char var_22 = (unsigned char)29;
unsigned long long int var_23 = 5108946865754517142ULL;
unsigned short var_24 = (unsigned short)27175;
unsigned long long int var_25 = 14852610123699188972ULL;
unsigned short var_26 = (unsigned short)30034;
short var_27 = (short)19238;
unsigned short var_28 = (unsigned short)21780;
short var_29 = (short)-8357;
long long int arr_1 [12] ;
long long int arr_2 [12] [12] [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
long long int arr_5 [12] [12] ;
short arr_8 [12] [12] [12] ;
unsigned long long int arr_9 [12] [12] [12] [12] ;
unsigned short arr_10 [12] [12] [12] [12] ;
unsigned char arr_11 [12] [12] ;
unsigned char arr_13 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_19 [12] [12] [12] ;
unsigned long long int arr_26 [21] ;
long long int arr_27 [21] ;
unsigned int arr_31 [23] ;
_Bool arr_33 [23] ;
unsigned int arr_15 [12] [12] [12] ;
signed char arr_28 [21] [21] ;
unsigned long long int arr_29 [21] ;
short arr_30 [21] [21] ;
unsigned short arr_35 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -3789812325899444541LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -7579244561369916688LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3343074137515291876ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 6283854910420986440LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)9756;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 17788658725787155390ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)25424 : (unsigned short)11794;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)140 : (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)147 : (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 6550845807500273758ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 19560190957541050ULL : 7002126864965664110ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = 1873553742687256516LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = 1674608606U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2374377862U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)108 : (signed char)77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 17018648266179999785ULL : 17108925322326388254ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-27118 : (short)1203;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_35 [i_0] = (unsigned short)20193;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
