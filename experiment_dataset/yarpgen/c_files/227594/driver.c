#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -629485533;
unsigned long long int var_2 = 1414391330713261137ULL;
unsigned long long int var_4 = 3290837094229222896ULL;
signed char var_6 = (signed char)-40;
short var_7 = (short)-9590;
unsigned char var_9 = (unsigned char)144;
unsigned int var_10 = 1900693981U;
int zero = 0;
short var_11 = (short)21060;
unsigned long long int var_12 = 16336127239445739002ULL;
unsigned int var_13 = 435003791U;
int var_14 = 1975240465;
unsigned int var_15 = 368102087U;
short var_16 = (short)24308;
unsigned short var_17 = (unsigned short)24590;
unsigned long long int var_18 = 5940976251684842612ULL;
long long int var_19 = 8439345762716531685LL;
unsigned char var_20 = (unsigned char)76;
int var_21 = 376917275;
unsigned char var_22 = (unsigned char)76;
_Bool var_23 = (_Bool)0;
long long int var_24 = -2440427578728882809LL;
long long int var_25 = 8377002635200172936LL;
unsigned long long int var_26 = 17612499012545064295ULL;
unsigned char var_27 = (unsigned char)248;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)-19;
signed char var_30 = (signed char)29;
unsigned long long int var_31 = 16781580648876784428ULL;
_Bool var_32 = (_Bool)1;
_Bool var_33 = (_Bool)1;
unsigned long long int var_34 = 17630395665571754181ULL;
signed char var_35 = (signed char)56;
long long int var_36 = -4633576823636497366LL;
int arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned short arr_2 [16] [16] ;
unsigned short arr_3 [16] ;
unsigned char arr_4 [16] [16] ;
int arr_5 [16] ;
long long int arr_7 [16] [16] [16] ;
int arr_8 [16] [16] ;
unsigned long long int arr_10 [16] [16] ;
unsigned short arr_11 [16] [16] [16] ;
unsigned int arr_14 [16] ;
unsigned char arr_16 [16] [16] ;
unsigned char arr_17 [16] [16] [16] [16] [16] ;
unsigned int arr_29 [23] [23] ;
short arr_9 [16] [16] [16] ;
int arr_12 [16] [16] [16] ;
int arr_26 [16] ;
unsigned char arr_27 [16] [16] ;
unsigned long long int arr_30 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -916211105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 328299959U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)3182;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)37671;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -30889206;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -5163011219744943660LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 530777468;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 3926253725886798110ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)60518;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 3321315632U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_29 [i_0] [i_1] = 3855016139U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-30176;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1002314937;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = 1234036738;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = 9707073072751561181ULL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
