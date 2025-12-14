#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -920413061;
unsigned short var_1 = (unsigned short)63722;
unsigned char var_2 = (unsigned char)206;
unsigned char var_4 = (unsigned char)162;
long long int var_7 = 7487744570827559631LL;
unsigned char var_8 = (unsigned char)139;
unsigned int var_9 = 1839342955U;
long long int var_10 = -2074013156545281548LL;
int var_11 = -991448752;
short var_12 = (short)17038;
int zero = 0;
signed char var_15 = (signed char)107;
int var_16 = 419713521;
int var_17 = -698061882;
_Bool var_18 = (_Bool)1;
long long int var_19 = -8814622843941315984LL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)11062;
long long int var_22 = -6071068488651147965LL;
int var_23 = -1080345923;
_Bool var_24 = (_Bool)1;
long long int var_25 = 4467499278608819430LL;
short var_26 = (short)-15079;
unsigned long long int var_27 = 11228909480224825394ULL;
signed char var_28 = (signed char)25;
signed char var_29 = (signed char)107;
short var_30 = (short)12652;
signed char var_31 = (signed char)-31;
unsigned long long int var_32 = 1179747522422623124ULL;
_Bool var_33 = (_Bool)0;
short var_34 = (short)-25998;
unsigned int arr_0 [25] ;
int arr_1 [25] ;
unsigned char arr_2 [25] ;
unsigned short arr_3 [25] [25] ;
signed char arr_4 [25] ;
short arr_5 [25] [25] [25] ;
int arr_6 [25] [25] ;
int arr_8 [25] [25] ;
long long int arr_10 [25] [25] [25] [25] ;
short arr_11 [25] [25] [25] [25] [25] ;
unsigned char arr_13 [10] [10] ;
_Bool arr_15 [10] [10] ;
long long int arr_17 [10] [10] [10] ;
signed char arr_19 [10] ;
int arr_21 [10] [10] [10] ;
int arr_23 [10] [10] [10] [10] ;
unsigned char arr_35 [21] ;
unsigned char arr_12 [25] [25] [25] [25] [25] ;
unsigned short arr_22 [10] ;
unsigned short arr_26 [10] [10] [10] [10] ;
int arr_27 [10] ;
unsigned char arr_30 [10] ;
_Bool arr_33 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 609303393U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1699984498;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)25680;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)11392;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 411140603;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 1959492491;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 126091706185820209LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-16842;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -8049634976897826541LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 1026036359;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 1432972171;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_35 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (unsigned short)49579;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned short)21939;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = -1457640389;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
