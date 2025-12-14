#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8204751802180475813ULL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-107;
int var_3 = -185283395;
signed char var_4 = (signed char)24;
signed char var_6 = (signed char)-100;
short var_7 = (short)31758;
short var_8 = (short)21329;
unsigned long long int var_10 = 18376045426197667591ULL;
unsigned short var_12 = (unsigned short)13018;
unsigned char var_13 = (unsigned char)91;
unsigned short var_14 = (unsigned short)33187;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-47;
unsigned short var_19 = (unsigned short)5904;
unsigned long long int var_20 = 12523879898737674035ULL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 3169142563856520984LL;
unsigned long long int var_23 = 6023979981129879880ULL;
signed char var_24 = (signed char)-7;
long long int var_25 = 5781777666463594001LL;
signed char var_26 = (signed char)17;
unsigned long long int var_27 = 12814578298289178042ULL;
short var_28 = (short)-28036;
unsigned long long int var_29 = 6039862202507499573ULL;
signed char var_30 = (signed char)47;
unsigned short var_31 = (unsigned short)40642;
unsigned long long int var_32 = 3292405501449777534ULL;
short var_33 = (short)11090;
signed char arr_0 [18] [18] ;
short arr_7 [18] [18] [18] ;
short arr_9 [18] [18] [18] [18] ;
unsigned long long int arr_10 [18] [18] [18] [18] [18] ;
_Bool arr_13 [18] [18] [18] [18] ;
long long int arr_15 [18] [18] [18] [18] ;
short arr_17 [18] [18] [18] [18] [18] ;
_Bool arr_19 [25] ;
unsigned long long int arr_23 [25] [25] [25] ;
long long int arr_18 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)12 : (signed char)112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)32375 : (short)-26607;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)24691;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 8927488854000464297ULL : 12226938923448107122ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 6464886522038220416LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)28426 : (short)-7065;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17992455415900551065ULL : 4485670383711612414ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -4479304673996847684LL : -4766119336349178951LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
