#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 768897563487710508LL;
int var_3 = 1190358902;
unsigned long long int var_6 = 6254003466989056545ULL;
unsigned int var_7 = 4033614855U;
int var_8 = 1494147205;
unsigned long long int var_10 = 9320747559217458218ULL;
unsigned long long int var_11 = 11055901039294000833ULL;
unsigned long long int var_12 = 6896566893482671504ULL;
unsigned int var_13 = 1152085074U;
unsigned short var_14 = (unsigned short)14421;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1083899474183597334LL;
unsigned int var_18 = 630368042U;
int zero = 0;
unsigned long long int var_20 = 18423908489642594560ULL;
short var_21 = (short)29526;
int var_22 = -113597296;
long long int var_23 = 2829203343208626648LL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
int var_26 = 879510339;
short var_27 = (short)-4736;
unsigned long long int var_28 = 3512563460270363300ULL;
short var_29 = (short)-10866;
long long int var_30 = -8161079274473567724LL;
unsigned long long int var_31 = 9584550365884787620ULL;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 11348805901523288289ULL;
_Bool var_34 = (_Bool)0;
int var_35 = 754919222;
signed char arr_0 [16] ;
unsigned long long int arr_2 [16] [16] ;
unsigned short arr_3 [16] [16] [16] ;
signed char arr_5 [16] [16] [16] ;
_Bool arr_8 [16] [16] [16] [16] ;
short arr_11 [16] [16] [16] [16] ;
short arr_13 [16] [16] ;
unsigned long long int arr_18 [17] ;
unsigned short arr_19 [17] ;
unsigned short arr_20 [17] [17] ;
_Bool arr_23 [17] [17] [17] [17] ;
long long int arr_6 [16] [16] ;
short arr_9 [16] ;
unsigned short arr_17 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 6135796429031644573ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)53595;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)-32138;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-19050;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 17970635034193130099ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (unsigned short)55884;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)54083;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 8843885335301239160LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (short)15914;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)46220 : (unsigned short)20455;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
