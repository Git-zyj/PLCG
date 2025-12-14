#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32519;
unsigned long long int var_1 = 5803080944209369183ULL;
unsigned long long int var_2 = 12482395249996228149ULL;
short var_3 = (short)-2845;
unsigned char var_4 = (unsigned char)113;
unsigned long long int var_5 = 4042356263031648159ULL;
short var_6 = (short)-26928;
unsigned long long int var_7 = 1302484421631597058ULL;
unsigned int var_9 = 1674352826U;
unsigned char var_10 = (unsigned char)67;
short var_11 = (short)3201;
short var_12 = (short)-6048;
unsigned int var_13 = 1420916644U;
unsigned char var_15 = (unsigned char)102;
unsigned short var_16 = (unsigned short)12455;
int zero = 0;
unsigned short var_17 = (unsigned short)5868;
unsigned short var_18 = (unsigned short)52653;
unsigned long long int var_19 = 14705254896695198594ULL;
int var_20 = -1265534986;
unsigned int var_21 = 4101643567U;
unsigned char var_22 = (unsigned char)21;
unsigned long long int var_23 = 12420362097747686154ULL;
unsigned int var_24 = 2107041139U;
unsigned long long int var_25 = 1085188325855318977ULL;
signed char var_26 = (signed char)123;
short var_27 = (short)-4537;
unsigned char var_28 = (unsigned char)179;
unsigned int var_29 = 1365826895U;
unsigned int var_30 = 4075592603U;
unsigned int var_31 = 2326444327U;
unsigned char var_32 = (unsigned char)41;
short var_33 = (short)10117;
unsigned short var_34 = (unsigned short)56750;
unsigned short var_35 = (unsigned short)8867;
unsigned long long int var_36 = 6786856010256077556ULL;
_Bool var_37 = (_Bool)1;
short var_38 = (short)-1326;
unsigned long long int var_39 = 4951698396670481542ULL;
short var_40 = (short)30633;
signed char arr_0 [20] [20] ;
signed char arr_1 [20] [20] ;
int arr_2 [20] ;
unsigned long long int arr_4 [20] [20] [20] ;
unsigned long long int arr_5 [20] ;
unsigned int arr_6 [20] [20] [20] ;
unsigned int arr_7 [20] [20] [20] [20] ;
unsigned int arr_8 [20] [20] [20] [20] [20] ;
unsigned short arr_9 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_10 [20] [20] [20] [20] [20] ;
long long int arr_11 [20] [20] [20] [20] ;
unsigned long long int arr_12 [20] ;
unsigned int arr_16 [10] [10] ;
unsigned short arr_27 [10] [10] [10] ;
short arr_40 [13] [13] [13] ;
unsigned char arr_48 [13] [13] [13] [13] ;
_Bool arr_54 [13] [13] [13] [13] ;
unsigned short arr_13 [20] [20] [20] [20] ;
signed char arr_19 [10] ;
unsigned int arr_22 [10] [10] [10] ;
unsigned short arr_23 [10] [10] [10] ;
int arr_35 [11] ;
unsigned int arr_38 [13] ;
unsigned long long int arr_41 [13] [13] ;
long long int arr_42 [13] ;
signed char arr_43 [13] [13] [13] ;
unsigned long long int arr_47 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1655259046;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 11614244313157225745ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 12563496870878068442ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1819752683U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3748474083U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 566485086U : 1243255210U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)23404;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 10021196889732787501ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 7577627621967200024LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 17696128179715506449ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = 2071368696U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned short)27051;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (short)-21024;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)45815 : (unsigned short)15301;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)119 : (signed char)-125;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2739661104U : 2430899583U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)49783 : (unsigned short)1730;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = -1886232370;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_38 [i_0] = 3237796322U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_41 [i_0] [i_1] = 14796977473612722389ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_42 [i_0] = -2574812239990493202LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = 11777355025228790873ULL;
}

void checksum() {
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
