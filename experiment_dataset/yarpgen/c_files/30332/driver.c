#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned long long int var_1 = 12243467078378099242ULL;
unsigned int var_2 = 41409446U;
long long int var_3 = 1323631757516011148LL;
int var_4 = -977190601;
unsigned long long int var_5 = 11570065610311983025ULL;
unsigned int var_6 = 3220091191U;
short var_7 = (short)17919;
int var_8 = -1559756292;
_Bool var_9 = (_Bool)0;
int var_10 = -1624635222;
int zero = 0;
unsigned char var_11 = (unsigned char)197;
signed char var_12 = (signed char)43;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-13608;
unsigned char var_15 = (unsigned char)83;
unsigned long long int var_16 = 10684497343936010158ULL;
unsigned char var_17 = (unsigned char)223;
unsigned char var_18 = (unsigned char)49;
unsigned short var_19 = (unsigned short)53230;
short var_20 = (short)10763;
unsigned char var_21 = (unsigned char)255;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-26085;
short var_24 = (short)26649;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)46503;
unsigned int var_27 = 3624915035U;
unsigned long long int var_28 = 16748150601435254209ULL;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)60149;
unsigned char arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
long long int arr_3 [22] [22] [22] ;
short arr_5 [22] ;
unsigned long long int arr_6 [22] [22] ;
unsigned char arr_9 [22] [22] [22] [22] ;
short arr_15 [10] ;
int arr_17 [10] [10] [10] ;
long long int arr_24 [10] ;
short arr_26 [10] ;
long long int arr_29 [10] [10] [10] [10] [10] [10] ;
int arr_30 [10] [10] ;
_Bool arr_31 [10] [10] [10] [10] [10] [10] [10] ;
int arr_36 [23] [23] ;
signed char arr_40 [23] ;
signed char arr_41 [23] [23] [23] ;
short arr_42 [23] [23] [23] ;
long long int arr_11 [22] [22] [22] [22] ;
long long int arr_23 [10] ;
short arr_33 [10] [10] [10] [10] [10] [10] ;
signed char arr_43 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 13997393915987664642ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1930772673678789721LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)9446;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 2337206598148682424ULL : 10215129780388232822ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)250 : (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (short)-19339;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 145119892;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 50707387638552315LL : 1647559538918434983LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (short)15692 : (short)21625;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8896671539455926598LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? 222465841 : -20715560;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_36 [i_0] [i_1] = (i_1 % 2 == 0) ? -219670854 : 1456412449;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (signed char)-97 : (signed char)-11;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-92 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (short)-22604;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -7126507289363412317LL : 2676558131973448788LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = -247465445576791680LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (short)969 : (short)-21794;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-67 : (signed char)114;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
