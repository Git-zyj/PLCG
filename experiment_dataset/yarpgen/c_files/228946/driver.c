#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1905803130U;
int var_2 = 498155714;
signed char var_4 = (signed char)13;
unsigned short var_5 = (unsigned short)51174;
unsigned long long int var_6 = 13031546787590974439ULL;
unsigned short var_8 = (unsigned short)64274;
long long int var_9 = 9214492478772783423LL;
unsigned short var_10 = (unsigned short)24998;
short var_11 = (short)14603;
short var_12 = (short)-1419;
int zero = 0;
short var_13 = (short)24544;
long long int var_14 = 997828139907160888LL;
short var_15 = (short)-28309;
unsigned int var_16 = 1303238850U;
unsigned short var_17 = (unsigned short)50743;
unsigned long long int var_18 = 12472052186632674701ULL;
unsigned short var_19 = (unsigned short)50536;
unsigned short var_20 = (unsigned short)2696;
unsigned char var_21 = (unsigned char)7;
unsigned long long int var_22 = 7562733518460807181ULL;
unsigned long long int var_23 = 1280677385237578319ULL;
unsigned short var_24 = (unsigned short)34753;
int var_25 = 1102303317;
signed char var_26 = (signed char)-34;
unsigned char var_27 = (unsigned char)101;
unsigned long long int arr_1 [18] [18] ;
short arr_2 [18] ;
_Bool arr_3 [18] ;
short arr_5 [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
unsigned long long int arr_8 [18] [18] [18] ;
int arr_10 [18] ;
unsigned short arr_11 [18] [18] [18] [18] ;
unsigned long long int arr_13 [18] ;
int arr_18 [18] [18] [18] ;
_Bool arr_19 [18] [18] [18] ;
unsigned long long int arr_23 [18] [18] [18] ;
unsigned char arr_27 [18] [18] ;
unsigned long long int arr_28 [18] ;
unsigned short arr_4 [18] ;
unsigned short arr_9 [18] [18] ;
unsigned char arr_14 [18] [18] ;
unsigned char arr_17 [18] [18] [18] [18] ;
unsigned short arr_20 [18] ;
unsigned long long int arr_21 [18] [18] ;
unsigned short arr_24 [18] [18] ;
signed char arr_29 [18] ;
unsigned long long int arr_36 [18] [18] [18] [18] ;
long long int arr_37 [18] [18] ;
unsigned int arr_38 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 4519512774286499275ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)11028;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-22940;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 7377842672710997121ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 814946869502224305ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = -1545471569;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)26400;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 8849742508897142927ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -415845564;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 15620001657253385226ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = 2705784508510708738ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)34557;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)25625;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)209 : (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)104 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (unsigned short)29982;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = 16068746899974343665ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)53712;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 1659345393094988058ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_37 [i_0] [i_1] = 6422731269839189487LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 2843437403U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
