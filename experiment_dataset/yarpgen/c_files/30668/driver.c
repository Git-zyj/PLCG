#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16665262810992463304ULL;
int var_1 = -87343707;
unsigned long long int var_2 = 8447099411115665930ULL;
signed char var_3 = (signed char)99;
short var_5 = (short)-3867;
int var_6 = -1984539801;
signed char var_7 = (signed char)73;
short var_10 = (short)11475;
unsigned char var_11 = (unsigned char)135;
long long int var_13 = 857317850747658713LL;
signed char var_14 = (signed char)-108;
signed char var_16 = (signed char)70;
int zero = 0;
int var_20 = -1968750126;
long long int var_21 = -3837990687422834061LL;
unsigned char var_22 = (unsigned char)119;
long long int var_23 = -3140923783887257191LL;
int var_24 = -776183107;
unsigned char var_25 = (unsigned char)231;
int var_26 = 562170138;
long long int var_27 = -2903027496123667567LL;
long long int var_28 = -6253718900273987342LL;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
signed char var_31 = (signed char)93;
long long int var_32 = 5178385022890094163LL;
int var_33 = -1890997113;
_Bool var_34 = (_Bool)1;
unsigned long long int arr_1 [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_3 [23] ;
_Bool arr_4 [23] [23] ;
_Bool arr_5 [23] ;
long long int arr_6 [23] [23] [23] ;
unsigned long long int arr_7 [23] [23] [23] [23] ;
long long int arr_8 [23] [23] [23] ;
unsigned long long int arr_12 [23] [23] [23] [23] ;
short arr_10 [23] [23] [23] [23] ;
unsigned long long int arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 8648597603547402263ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 7177666119135868439ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1140214288721006909LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 4573766467260896288ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -3729400343609513634LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 7692834909232506085ULL : 4976808774134710338ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-10817;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 18187128219524822216ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
